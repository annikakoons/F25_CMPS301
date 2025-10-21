// Assignment 2, Problem 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
 //declare and initialize variables
	string name1, name2, name3;
	double hours1, hours2, hours3, rate1, rate2, rate3;
//recieve user input
	cout << "****Welcome to The Freelance Invoice Generator****" << endl<<endl;
	cout << "Please enter the following information:" << endl;
	cout << "Client 1 name: ";
	cin >> name1;
	cout << "Hours worked: ";
	cin >>hours1;
	cout << "Hourly rate: ";
	cin >> rate1;
	cout << endl;

	cout << "Client 2 name: ";
	cin >> name2;
	cout << "Hours worked: ";
	cin >> hours2;
	cout << "Hourly rate: ";
	cin >> rate2;
	cout << endl;

	cout << "Client 3 name: ";
	cin >> name3;
	cout << "Hours worked: ";
	cin >> hours3;
	cout << "Hourly rate: ";
	cin >> rate3;
	cout << endl;

	//perform calculations
	double earning1 = (hours1 * rate1), earning2 = (hours2 * rate2), earning3 = (hours3 * rate3), total = (earning1 + earning2 + earning3);

	//display results
	cout << "================FREELANCEC INVOICE================" << endl;
	cout << name1 <<" "<< hours1 << " hrs @ $" << rate1 << "/hr = $" << earning1 << endl;
	cout << name2 << " " << hours2 << " hrs @ $" << rate2 << "/hr = $" << earning2 << endl;
	cout << name3 << " " << hours3 << " hrs @ $" << rate3 << "/hr = $" << earning3 << endl;
	cout << "--------------------------------------------------" << endl;
	cout << "Total Income: = $" << total << endl;
	cout << "==================================================" << endl;
	cout << "Get that dollar Diva" << endl;

}
