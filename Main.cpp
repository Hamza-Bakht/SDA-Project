#include<iostream>
#include<string>
#include "Account.h"
#include "Attendance.h"
#include "Cart.h"
#include "Concession.h"
#include "Customer.h"
#include "Date.h"
#include "Order.h"
#include "Outlet.h"
#include "Product.h"
#include "ProductReport.h"
#include "Report.h"
#include "Shift.h"
#include "Staff.h"
#include "StaffReport.h"
#include "Time.h"
#include "User.h"
using namespace std;

void menu()
{
	char option;
	string username;
	string password;
	cout << "\t\tWelcome to S&J Boutique\n";
	cout << "Enter c for customer\nEnter s if for staf\n";
	cout << "Enter option : ";
	cin >> option;

	//customer
	if (option == 'c' || option == 'C')
	{
		cout << "Select the following option\n";
		cout << "1 New customer\n";
		cout << "2 Recurring customer\n";
		cout << "3 Browse anonymously\n";
		cin >> option;
		if (option == '1')
		{
			cout << "Please sign up by creating a new username and password\n";
			cout << "Enter username: ";
			cin >> username;
			cout << "Enter password: ";
			cin >> password;
			//functionality of customer
		}
		else if (option == '2')
		{
			//crate recurring customer obj
			cout << "Welcome back! Please sign in\n";
			cout << "Enter your username: ";
			cin >> username;
			cout << "Enter your password: ";
			cin >> password;
		}

		else if (option == '3')
		{
			//browse anonmously option
		}

		else
		{
			cout << "Incorrect input\n";
			return;
		}

	}

	//staff
	else if (option == 's' || option == 'S')
	{
		cout << "Enter the digit according to your designation\n";
		cout << "1 Store Admin\n";
		cout << "2 Inventory Manager\n";
		cout << "3 Floor Manager\n";
		cout << "4 Store Manager\n";
		cout << "5 Sales Agent\n";
		cout << "Enter Digit : ";
		cin >> option;
		if (option == '1')
		{
			//store admin code
		}

		else if (option == '2')
		{
			//inventory manager code
		}

		else if (option == '3')
		{
			//Floor Manager code


		}

		else if (option == '4')
		{
			//store manager code
		}

		else if (option == '5')
		{
			//sales agent code
		}

		else
		{
			cout << "Error. Incorrect selection\n";
			return;
		}

		cout << "Enter username: ";
		cin >> username;
		cout << "Enter password: ";
		cin >> password;


	}

	else
	{
		cout << "Error. Incorrect selection";
		return;
	}
}

int main()
{
	menu();
	return 0;
}