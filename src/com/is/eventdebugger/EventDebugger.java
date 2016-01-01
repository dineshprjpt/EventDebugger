package com.is.eventdebugger;

import java.util.Timer;
import java.util.TimerTask;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.text.TextUtils;
import android.text.method.ScrollingMovementMethod;
import android.view.View;
import android.view.View.OnClickListener;
import android.widget.Button;
import android.widget.TextView;
import android.widget.Toast;

public class EventDebugger extends Activity {

	private Button mActionButton;
	private EventMonitorThread mEventMonitorThread;
	private TextView mLogs;
	private Globals mGlobals;
	private int i = 0;

	private TextView mInst;

	private String[] inst_list = { "Tap on the screen",
			"Double Tap on the screen", "Scroll vertically",
			"Scroll horizontally", "Draw random line" };

	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		setContentView(R.layout.main);
		setupViews();
		mGlobals = new Globals();

		final Timer t = new Timer();
		TimerTask mtask = new TimerTask() {

			@Override
			public void run() {
				runOnUiThread(new Runnable() {
					

					public void run() {
						if (i < 5) {
							mLogs.append(inst_list[i] + "\n");
							mInst.setText(inst_list[i]);
							i++;
						} else {
							i = 0;
						}
					}
				});
			}
		};
		t.schedule(mtask, 0, 5000);
	}

	@Override
	protected void onStart() {
		super.onStart();

	}

	public Handler mHandler = new Handler() {
		@Override
		public void handleMessage(Message msg) {
			if (msg != null) {
				// String data = msg.getData().getString("RESPONSE");
				while (mGlobals != null && mGlobals.getmQueue() != null
						&& mLogs != null && !mGlobals.getmQueue().isEmpty() && mGlobals.getmQueue().get(0) != null) {
					try {
						mLogs.append(mGlobals.getmQueue().get(0));
						mLogs.append("\r\n");
						mGlobals.getmQueue().remove(0);
					} catch (Exception e) {
						e.printStackTrace();
					}
				}
			}
		}

	};

	private void stopMonitor() {
		if (mEventMonitorThread != null && mEventMonitorThread.isAlive()) {
			mActionButton.setId(1);
			mActionButton.setText("Start");
			EventMonitorThread.m_bMonitorOn = false;
			mEventMonitorThread.interrupt();
			mEventMonitorThread = null;
		}
	}

	private void startMonitor() {
		EventMonitorThread.m_bMonitorOn = true;
		if (mEventMonitorThread == null) {
			mEventMonitorThread = new EventMonitorThread(mHandler, mGlobals);
			mEventMonitorThread.start();
		} else {
			mEventMonitorThread.start();
		}
		mActionButton.setId(2);
		mActionButton.setText("Stop");
	}

	private Button mCopy;
	private Button mClear;

	private void sendEmail(String body) {
		Intent intent = new Intent(Intent.ACTION_SEND);
		intent.setType("text/html");
		intent.putExtra(Intent.EXTRA_EMAIL, "vishalsinh.jhala@infostretch.com");
		intent.putExtra(Intent.EXTRA_SUBJECT, "Event Logs");
		intent.putExtra(Intent.EXTRA_TEXT, body);
		intent.setType("text/plain");
		startActivity(Intent.createChooser(intent, "Send Email"));
	}

	private void setupViews() {
		mLogs = (TextView) findViewById(R.id.event);
		mLogs.setMovementMethod(ScrollingMovementMethod.getInstance());
		mActionButton = (Button) findViewById(R.id.action);
		mActionButton.setId(1);
		mActionButton.setOnClickListener(new OnClickListener() {

			@Override
			public void onClick(View v) {
				if (mActionButton.getId() == 1) {
					startMonitor();
				} else {
					stopMonitor();
				}

			}
		});

		mCopy = (Button) findViewById(R.id.copy);
		mCopy.setOnClickListener(new OnClickListener() {

			@Override
			public void onClick(View v) {
				stopMonitor();
				try {
					if (mLogs != null
							&& !TextUtils.isEmpty(mLogs.getEditableText()
									.toString())) {
						int sdk = android.os.Build.VERSION.SDK_INT;
						if (sdk < android.os.Build.VERSION_CODES.HONEYCOMB) {
							android.text.ClipboardManager clipboard = (android.text.ClipboardManager) getSystemService(Context.CLIPBOARD_SERVICE);
							clipboard.setText(mLogs.getEditableText()
									.toString());
						} else {
							android.content.ClipboardManager clipboard = (android.content.ClipboardManager) getSystemService(Context.CLIPBOARD_SERVICE);
							/*android.content.ClipData clip = android.content.ClipData
									.newPlainText("logs", mLogs
											.getEditableText().toString());
							clipboard.setPrimaryClip(clip);*/
						}
						sendEmail(mLogs.getEditableText().toString());
					} else {
						Toast.makeText(EventDebugger.this, "nothing to copy",
								Toast.LENGTH_SHORT).show();
					}
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
		});

		mInst = (TextView) findViewById(R.id.inst);

		mClear = (Button) findViewById(R.id.clear);
		mClear.setOnClickListener(new OnClickListener() {

			@Override
			public void onClick(View v) {
				// TODO Auto-generated method stub
				stopMonitor();
				if (mLogs != null)
					mLogs.setText("");
			}
		});
	}
}
