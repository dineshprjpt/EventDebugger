package com.is.eventdebugger;

import android.util.Log;

public class InputDevice {
		
		private int Id;
		private String m_szPath, m_szName;
		private boolean m_bOpen;
		private native static int PollDev(int devid);
		private native static int getType();
		private native static int getCode();
		private native static int getValue();
		private native static int OpenDev(int devid);
		private native static int RemoveDev(int devid);
		private native static String getDevName(int devid);
		
		InputDevice(int id, String path) {
			Id = id; m_szPath = path; 
		}
		
		public int InjectEvent() {
			return 0;
		}
		
		public int getPollingEvent() {
			return PollDev(Id);
		}

		public int getSuccessfulPollingType() {
			return getType();
		}
		public int getSuccessfulPollingCode() {
			return getCode();
		}
		public int getSuccessfulPollingValue() {
			return getValue();
		}
		
		public boolean getOpen() {
			return m_bOpen;
		}
		public int getId() {
			return Id;
		}
		public String getPath() {
			return m_szPath;
		}
		public String getName() {
			return m_szName;
		}
		
		public void Close() {
			m_bOpen  = false;
			RemoveDev(Id);
		}
		
		final int 	EV_KEY = 0x01,
				EV_REL = 0x02,
				EV_ABS = 0x03,
				REL_X = 0x00,
				REL_Y = 0x01,
				REL_Z = 0x02,
				BTN_TOUCH = 0x14a;// 330
		
		public boolean Open(boolean forceOpen) {
			
			int res = OpenDev(Id);
	   		// if opening fails, we might not have the correct permissions, try changing 660 to 666
	   		if (res != 0) {
	   			// possible only if we have root
	   			if(forceOpen && Shell.isSuAvailable()) { 
	   				// set new permissions
	   				Shell.runCommand("chmod 666 "+ m_szPath + "/*");
	   				// reopen
	   			    res = OpenDev(Id);
	   			}
	   		}
	   		m_szName = getDevName(Id);
	   		m_bOpen = (res == 0);
	   		// debug
	   		Log.d("InputDevice",  "Open:"+m_szPath+" Name:"+m_szName+" Result:"+m_bOpen);
	   		// done, return
	   		return m_bOpen;

			/*
			int res = OpenDev(Id);
	   		m_szName = getDevName(Id);
	   		m_bOpen = (res == 0);
	   		// debug
	   		Log.d("InputDevice",  "Open:"+m_szPath+" Name:"+m_szName+" Result:"+m_bOpen);
	   		// done, return
	   		return m_bOpen;*/
	   	}

}
