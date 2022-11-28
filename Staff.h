#pragma once
#include <string>
#include <string.h>
#include<iostream>
using namespace std;
class Staff {
	string Qualification;
	string Role;
	int OutletId;
public:
	Staff();
	Staff(string q,string r,int o);
	void set_qualification(string q);
	void set_role(string r);
	void set_outletId(int o);
	string get_qualification();
	string get_role();
	int get_outletId();
	void AddStaff();
	void UpdateStaff();
	~Staff();
};

class StoreAdmin : public Staff {
	string Name;

public:
	StoreAdmin();
	StoreAdmin(string n,string q,string r, int o);
	void set_name(string n);
	string get_name();
	void ManageUser();
	~StoreAdmin();
};

class InventoryManager : public Staff {
	string Name;

public:
	InventoryManager();
	InventoryManager(string n, string q, string r, int o);
	void set_name(string n);
	string get_name();
	void ManageStoreInventory();
	~InventoryManager();
};

class StoreManager : public Staff {
	string Name;

public:
	StoreManager();
	StoreManager(string n, string q, string r, int o);
	void set_name(string n);
	string get_name();
	void ManageDiscountPolicies();
	void ViewReports();
	~StoreManager();
};

class SalesAgent : public Staff {
	string Name;

public:
	SalesAgent();
	SalesAgent(string n, string q, string r, int o);
	void set_name(string n);
	string get_name();
	void MarkAttendence();
	void CheckIn();
	void CheckOut();
	~SalesAgent();
};

class FloorManager : public Staff {
	string Name;

public:
	FloorManager();
	FloorManager(string n, string q, string r, int o);
	void set_name(string n);
	string get_name();
	void TrackAttendence();
	void ViewReports();
	void ManageWorkShift();
	~FloorManager();
};

