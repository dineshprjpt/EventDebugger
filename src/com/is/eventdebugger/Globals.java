package com.is.eventdebugger;

import java.util.ArrayList;

public class Globals {

	private  ArrayList<String> mQueue = new ArrayList<String>();

	public synchronized ArrayList<String> getmQueue() {
		return mQueue;
	}

	public synchronized void setmQueue(ArrayList<String> mQueue) {
		this.mQueue = mQueue;
	}

	
}
