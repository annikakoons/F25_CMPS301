// Midterm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <iomanip>
int main()
{
//Problem 1- Tech store discount calculator

//declare and initialize varibels
	string name;
	int items;
	double price, discount1 = 1.0, discount2 = 0.0, discount3 = 1.0, discount4 = 0.0;
	;
	char member;


//Greet the user
	cout << setw(50) << setfill('*') << "Welcome to the Tech Store Invoice Calculator" << setw(6) << "*" << endl << endl;

//prompt user input
	cout << "Enter customer name: ";
	cin >> name;
	cout << "Enter number of items: ";
	cin >> items;
	cout << "Enter price per item ($): ";
	cin >> price;
	cout << "Are you a store member? (Y/N): ";
	cin >> member;
	cout << endl<<endl;

//compute subtotal
	double subtotal = (price * items);

//declare conditionals
	if (subtotal > 500)
	{
		discount1 = 0.90;
		discount2 = 10;
	}

	else if (subtotal > 300)
	{
		discount1 = .95;
		discount2 = 5;
	}

	else if (subtotal < 300)
	{
		discount1 = 1;
		discount2 = 0;
	}

	if (member == 'Y' || member == 'y') 
	{
		discount3 = 0.95;
		discount4 = 5;
	}

	else {
		discount3 = 1.0;
		discount4 = 0;
	}

//compute final total
	double total = (subtotal * discount1 * discount3);

//display output
	cout << fixed << setprecision(2);
	cout << setw(35) << setfill('=') << "PURCHASE INVOICE" << setw(15) << "=" << endl;
	cout << "Customer Name: " << name << endl;
	cout << "Items Purchased: " << items << endl;
	cout << "Price per Item: $" << price << endl;
	cout << "Subtotal: $" << subtotal << endl;
	cout << "Discount Applied: " << discount2 << "%" << endl;
	cout << "Membership Discount: " << discount4 << "%" << endl;
	cout << setw(50) << setfill('-') << "" << endl;
	cout << "Final Total: $" << total << endl;
	cout << setw(50) << setfill('=') << "" << endl;

	cout << "Thank you for shopping with us!" << endl;
	
	return 0;

}

