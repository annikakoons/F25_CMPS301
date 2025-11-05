// Assignment 3, Problem 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
//Problem 2: Monthly Budget and Savings Planner

//welcome message
cout << setfill('*');
cout << setw(55) << "Welcome to the Monthly Budget & Savings Planner" << setw(8) << '*' << endl << endl;

//declare and initialize variables
double income, rent, utilities, groceries, transportation, goal;

//recieve user input
cout << "Enter your monthy income($) :";
cin >> income;
cout << "Enter your rent or mortgage cost($) :";
cin >> rent;
cout << "Enter your utilities cost($) :";
cin >> utilities;
cout << "Enter your groceries cost($) :";
cin >> groceries;
cout << "Enter your transportation cost($) :";
cin >> transportation;
cout << "Enter your desired savings goal (% of income) :";
cin >> goal;
cout << endl;

//perform calculations
double total = (rent + utilities + groceries + transportation), savings = ((goal / 100) * income), remaining = (income - total - savings);

//diplay results 
cout << setfill('=');
cout << setw(30) << "MONTHLY BUDGET REPORT" << setw(10) << '=' << endl;

cout << fixed << showpoint << setprecision(2);

cout << "Monthly Income : $" << income << endl;
cout << setw(25) << left << setfill('-') << setw(40) << "-" << endl;
cout << "Rent / Mortgage : $" << rent << endl;
cout << "Utilities : $" << utilities << endl;
cout << "Groceries : $" << groceries << endl;
cout << "Transportation : $" << transportation << endl;
cout << setw(25) << left << setfill('-') << setw(40) << "-" << endl;
cout << "Total Expenses : $" << total << endl;
cout << "Savings Goal (" << goal << "%) : $" << savings << endl;
cout << "Remaining Balance : $" << remaining << endl;
cout << setw(25) << left << setfill('=') << setw(40) << "-" << endl;
cout << "Give a man a fish he eats for a day. Teach a man how to fish and he saves a lot of money #Baller" << endl;

return 0;


}

