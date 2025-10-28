// Quiz 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <iomanip>
int main()
{
//declare and initialize variables
	int small, medium, large;
	double tax;

//prompt user input
	cout << setfill('*');
	cout << setw(50)<<"Welcome to the Coffee Shop Order Calculator"<<setw(8)<<"*" << endl << endl;

	cout << "Number of small coffees ordered: ";
	cin >> small;
	cout << "Number of medium coffees ordered: ";
	cin >> medium;
	cout << "Number of large coffees ordered: ";
	cin >> large;
	cout << "Enter tax rate(%): ";
	cin >> tax;

//perform calculations
	double smallt = (small * 2.25), mediumt = (medium * 3.00), larget = (large * 3.75);
	double subtotal = (smallt + mediumt + larget), taxamount = ((tax / 100) * subtotal), total = (subtotal + taxamount);

//display RECEIPT 
	cout << fixed << setprecision(2);
	cout << setfill('=')<< setw(30) << "COFFEE SHOP RECEIPT" << setw(10)<<'=' << endl;
	cout << "Small Coffees (" << small << "x $2.25): $" << smallt << endl;
	cout << "Medium Coffees (" << medium << "x $2.25): $" << mediumt << endl;
	cout << "Large Coffees (" << large << "x $2.25): $" << larget  << endl;
	cout << left <<"----------------------------------------"<<endl;
	cout << "Subtotal: $" << subtotal << endl;
	cout << "Tax: $" << taxamount << endl;
	cout << left <<"----------------------------------------" << endl;
	cout << "Total: $" << total << endl;
	cout << left <<"========================================" << endl;
	cout << "Thank you for supporting your local coffee shop!" << endl;

	return 0;
	







}

