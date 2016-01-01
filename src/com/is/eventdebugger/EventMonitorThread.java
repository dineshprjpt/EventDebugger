package com.is.eventdebugger;

import java.util.ArrayList;

import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.provider.Settings.Global;
import android.util.Log;
import android.widget.TextView;

public class EventMonitorThread extends Thread {

	private Handler mHandler;
	private Bundle mBundle = new Bundle();
	private String mSendData = "";
	private TextView mLogsView;
	private boolean valueSet;
	private Globals g;
	
	

	synchronized String getmSendData() {
		if (!valueSet) {
			try {
				wait();
			} catch (InterruptedException e) {
				e.printStackTrace();
			}
		}
		valueSet = false;
		notify();
		return mSendData;
	}

	synchronized void setmSendData(String data) {
		if (valueSet)
			try {
				wait();
			} catch (InterruptedException e) {
				System.out.println("InterruptedException caught");
			}
		this.mSendData = data;
		valueSet = true;
		notify();
	}

	public EventMonitorThread(Handler mHandler,Globals g) {
		this.mHandler = mHandler;
		this.g = g;
	}

	private native static int ScanFiles(); // return number of devs

	public ArrayList<InputDevice> m_Devs = new ArrayList<InputDevice>();
	public static boolean m_bMonitorOn;
	InputDevice idev;
	public int iTotalDevices;
	InputDevice touchInputDevice;
	InputDevice melfasInputDevice;

	public void run() {
		iTotalDevices = 0;
		m_bMonitorOn = true;
		getDevices();

		while (m_bMonitorOn) {

			/*
			 * for (InputDevice idev : m_Devs) if (idev.getOpen() && (0 ==
			 * idev.getPollingEvent())) {
			 * Log.i("",idev.getName()+String.format(" :%04d-%04d-%04d",
			 * idev.getSuccessfulPollingType(), idev.getSuccessfulPollingCode(),
			 * idev.getSuccessfulPollingValue() ) ); }
			 */
			// Grab Touch Messages and send them
			if (touchInputDevice != null && touchInputDevice.getOpen()
					&& (0 == touchInputDevice.getPollingEvent())) {
				
				setmSendData(touchInputDevice.getName()
						+ String.format(" :%04d-%04d-%04d",
								touchInputDevice.getSuccessfulPollingType(),
								touchInputDevice.getSuccessfulPollingCode(),
								touchInputDevice.getSuccessfulPollingValue()));
				//Log.i("EventDebugger", getmSendData());
				// mLogsView.setText(mSendData);
				g.getmQueue().add((getmSendData()));
					Message msg = mHandler.obtainMessage();
					mBundle.putString("RESPONSE", "");
					msg.setData(mBundle);
					mHandler.sendMessage(msg);
				
				
				 /* Global.strCmd.add("MST_TOUC" + String.format("%04d%04d%04d",
				 * touchInputDevice.getSuccessfulPollingType(),
				 * touchInputDevice.getSuccessfulPollingCode(),
				 * touchInputDevice.getSuccessfulPollingValue()));
				 */
			}
			/*
			 * Message msg = mHandler.obtainMessage();
			 * mBundle.putString("RESPONSE", getmSendData());
			 * msg.setData(mBundle); mHandler.sendMessage(msg);
			 */
			// Grab Melfas Messages and send them
			/*
			 * if (melfasInputDevice!=null && melfasInputDevice.getOpen() && (0
			 * == melfasInputDevice.getPollingEvent())) {
			 * 
			 * Global.strCmd.add("MST_MELF" + String.format("%04d%04d%04d",
			 * melfasInputDevice.getSuccessfulPollingType(),
			 * melfasInputDevice.getSuccessfulPollingCode(),
			 * melfasInputDevice.getSuccessfulPollingValue() ) ); }
			 */

		}
	}

	static {
		System.loadLibrary("EventMonitor");
	}

	public void CloseAll() {
		m_bMonitorOn = false;
		for (InputDevice idev : m_Devs) {
			if (idev.getOpen())
				idev.Close();
		}

	}

	public void getDevices() {

		m_Devs.clear();
		int n = ScanFiles(); // return number of devs

		for (int i = 0; i < n; i++)
			m_Devs.add(new InputDevice(i, "/dev/input"));

		iTotalDevices = n;

		// Open all devices
		for (InputDevice idev : m_Devs) {
			idev.Open(true);
			setmSendData(idev.getName());
			g.getmQueue().add((getmSendData()));
			Message msg = mHandler.obtainMessage();
			mBundle.putString("RESPONSE", "");
			msg.setData(mBundle);
			mHandler.sendMessage(msg);

		}
		// Store touch device and Malfas keys device
		for (InputDevice idev : m_Devs) {
			if ( idev.getName().contains("touch") ) {
				touchInputDevice = idev;
			} else if (idev.getName().contains("melfas")) {
				melfasInputDevice = idev;
			}
		}

	}
}
// Original function for back up
/*
 * for (InputDevice idev : m_Devs) { // Open more devices to see their messages
 * 
 * if (idev.getOpen() && (0 == idev.getPollingEvent())) { final String line =
 * idev.getName() + ":" + idev.getSuccessfulPollingType() + " " +
 * idev.getSuccessfulPollingCode() + " " + idev.getSuccessfulPollingValue(); //
 * Check for X and Y co-ordinates if (idev.getSuccessfulPollingType() == 3 &&
 * idev.getSuccessfulPollingCode() == 53) { // This is x co-ordinate need to
 * stor x = idev.getSuccessfulPollingValue(); } else if
 * (idev.getSuccessfulPollingType() == 3 && idev.getSuccessfulPollingCode() ==
 * 54) { // This is y co-ordinate need to store y =
 * idev.getSuccessfulPollingValue(); } if (x != -1 && y != -1) {
 * 
 * Global.strCmd.add("MST_TOUC" + String.format("%04d%04d", x,y)); x = y = -1; }
 * 
 * } }
 */

