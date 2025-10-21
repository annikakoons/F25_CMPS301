// Assignment 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	cout << "Problem 1- Tech Store Purchase Invoice------------------------" << endl << endl;
	//declare and initialize variables
	string tech1, tech2, accessory;
	double price1, price2, price3;
	cout << "****Welcome to the Tech Store Purchase Incoice Generator****" << endl<<endl;
	//take user input
	cout << "Enter name of Tech Item 1: ";
	cin >>tech1;
	cout << "Enter price: $";
	cin >> price1;
	cout << "Enter name of Tech Item 2: ";
	cin>>tech2;
	cout << "Enter price: $";
	cin >> price2;
	cout << "Enter name of Accessory: ";
	cin >> accessory;
	cout << "Enter price: $";
	cin >> price3;
	cout << endl;
	//perform calculations
	double subtotal = (price1 + price2 + price3), salestax=(subtotal*0.095),total=(subtotal+salestax);

	//display results
	cout << "==============TECH STORE INVOICE===============" << endl;
	cout << tech1 << ", $" << price1 << endl;
	cout << tech2 << ", $" << price2 << endl;
	cout << accessory << ", $" << price3 << endl;
	cout << "------------------------------------------------" << endl;
	cout << "Subtotal: $" << subtotal << endl;
	cout << "Sales tax (9.5%): $" << salestax << endl;
	cout << "Total: $" << total << endl;
	cout << "Thank you for shopping with us!" << endl;


}