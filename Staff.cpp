#include <string>
#include <string.h>
#include"Staff.h";

Staff::Staff()
{
    Qualification="";
    Role="";
	OutletId=0;
}

Staff::Staff(string q, string r, int o)
{
	Qualification = q;
	Role = r;
	OutletId = o;
}
void Staff::set_qualification(string q)
{
	Qualification=q;
}


void Staff::set_role(string r)
{
	Role = r;
}

void Staff::set_outletId(int o)
{
	OutletId = o;
}
string Staff::get_qualification()
{
	return Qualification;
}

string Staff::get_role()
{
	return Role;
}

int Staff::get_outletId()
{
	return OutletId;
}

void Staff::AddStaff()
{

}

void Staff::UpdateStaff()
{
	
}


Staff::~Staff()
{
	Qualification = "";
	Role = "";
	OutletId = 0;
}

StoreAdmin::StoreAdmin()
{
	Name = "";
}

StoreAdmin::StoreAdmin(string n,string q,string r,int o) : Staff(q,r,o)
{
	Name = n;
}

void StoreAdmin::set_name(string n)
{
	Name = n;
}

string StoreAdmin::get_name()
{
	return Name;
}

void StoreAdmin::ManageUser()
{

}
StoreAdmin::~StoreAdmin()
{
	Name = "";
}


InventoryManager::InventoryManager()
{
	Name = "";
}

InventoryManager::InventoryManager(string n, string q, string r, int o) : Staff(q, r, o)
{
	Name = n;
}

void InventoryManager::set_name(string n)
{
	Name = n;
}

string InventoryManager::get_name()
{
	 Name;
}

void InventoryManager::ManageStoreInventory()
{

}
InventoryManager::~InventoryManager()
{
	Name = "";
}


StoreManager::StoreManager()
{
	Name = "";
}

StoreManager::StoreManager(string n, string q, string r, int o) : Staff(q, r, o)
{
	Name = n;
}

void StoreManager::set_name(string n)
{
	Name = n;
}

string StoreManager::get_name()
{
	return Name;
}
void StoreManager::ManageDiscountPolicies()
{

}
void StoreManager::ViewReports()
{

}
StoreManager::~StoreManager()
{
	Name = "";
}

SalesAgent::SalesAgent()
{
	Name = "";
}

SalesAgent::SalesAgent(string n, string q, string r, int o) : Staff(q, r, o)
{
	Name = n;
}

void SalesAgent::set_name(string n)
{
	Name = n;
}

string SalesAgent::get_name()
{
	return Name;
}

void SalesAgent::MarkAttendence()
{

}

void SalesAgent::CheckIn()
{

}

void SalesAgent::CheckOut()
{

}

SalesAgent::~SalesAgent()
{
	Name = "";
}


FloorManager::FloorManager()
{
	Name = "";
}

FloorManager::FloorManager(string n, string q, string r, int o) : Staff(q, r, o)
{
	Name = n;
}

void FloorManager::set_name(string n)
{
	Name = n;
}

string FloorManager::get_name()
{
	return Name;
}

void FloorManager::TrackAttendence()
{

}

void FloorManager::ViewReports()
{

}

void FloorManager::ManageWorkShift()
{

}

FloorManager::~FloorManager()
{
	Name = "";
}



