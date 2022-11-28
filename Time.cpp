#include<iostream>
#include<string>
#include"Time.h"
using namespace std;
Time::Time()
{
	min = 0;
	sec = 0;
	hour = 0;
}
void Time::setmin(int min)
{
	this->min = min;
}
void Time::setsec(int sec)
{
	this->sec = sec;
}
void Time::sethour(int hour)
{
	this->hour = hour;
}
int Time::getsec()
{
	return this->sec;
}
int Time::getmin()
{
	return this->min;
}
int Time::gethour()
{
	return this->hour;
}
Time::~Time()
{
	min = 0;
	sec = 0;
	hour = 0;
}
