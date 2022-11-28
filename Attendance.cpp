#include "Attendance.h"
#include <string>
#include<ctime>
#include <iostream>
using namespace std;

Attendance::Attendance()
{
	 shift=0;
	 Id=0;
}

Attendance::Attendance(int s, Date d, Time t1, Time t2, int i) {
	shift=s;
	date=d;
    checkintime=t1;
	checkouttime=t2;
	Id=i;
}

void Attendance::set_shift(int s) {
	shift = s;
}

void Attendance::set_ID(int i) {
	Id = i;
}

void Attendance::set_CheckInTime(Time t1) {
	checkintime = t1;
}
void Attendance::set_CheckOutTime(Time t2) {
	checkouttime = t2;
}
void Attendance::set_Date(Date d) {
	date = d;
}
int Attendance::get_shift()
{
	return shift;
}

int Attendance::get_Id() {
	return Id;
}

Time Attendance::get_CheckInTime() {
	return checkintime;
}

Time Attendance::get_CheckOutTime() {
	return checkouttime;
}

Date Attendance::get_date() {
	return date;
}

void Attendance::MarkAttendance() {

}




Attendance::~Attendance()
{
	shift = 0;
	Id = 0;
}