#pragma once
#include <string>
#include <string.h>
#include<iostream>
#include "Date.h"
#include "Time.h"

class Attendance {
	int shift;
	Date date;
	Time checkintime;
	Time checkouttime;
	int Id;
public:
	Attendance();
	Attendance(int s,Date d,Time t1,Time t2, int i);
	void set_shift(int s);
	void set_Date(Date d);
	void set_CheckInTime(Time t1);
	void set_CheckOutTime(Time t2);
	void set_ID(int i);
	int get_shift();
	Date get_date();
	Time get_CheckInTime();
	Time get_CheckOutTime();
	int get_Id();
	void MarkAttendance();
	~Attendance();
};

