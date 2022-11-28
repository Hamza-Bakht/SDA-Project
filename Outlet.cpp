#include<iostream>
#include<string>
#include<string.h>
#include"Outlet.h";
using namespace std;
Outlet::Outlet()
{
	ID = 0;
	Location = "";
	Capacity = 0;
}

Outlet::Outlet(int id, string loc, int cap)
{
	ID = id;
	Location = loc;
	Capacity = cap;
}

void Outlet::AddOutlet()
{

}

void Outlet::UpdateOutlet()
{

}
void Outlet::BlockOutlet()
{

}
void Outlet::DeleteOutlet()
{

}

void Outlet::setCapacity(int cap)
{
	Capacity = cap;
}
void Outlet::setID(int id)
{
	ID = id;
}

void Outlet::setLocation(string loc)
{
	Location = loc;
}

int Outlet::getCapacity()
{
	return Capacity;
}

int Outlet::getID()
{
	return ID;
}

string Outlet::getLocation()
{
	return Location;
}