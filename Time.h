
#include<iostream>
#include<string>
using namespace std;
class Time
{
	int min;
	int sec;
	int hour;
public:
	Time();
	void setmin(int min);
	void setsec(int sec);
	void sethour(int hour);
	int getmin();
	int getsec();
	int gethour();
	~Time();
	

};