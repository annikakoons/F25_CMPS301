// Assignment 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	cout << "Problem 1" << endl<<endl;
	cout << "================================================================================================" << endl;
	cout << "				   Fall 2025 Class Schedule" << endl;
	cout << "					   Annika Koons" << endl;
	cout << "================================================================================================" << endl<<endl;
	cout << "|Day	|Time		|Course#|Course Name		|Location		|Instrcutor" << endl;
	cout << "------------------------------------------------------------------------------------------------" << endl;
	cout << "|MWF	|9:25-10:30	|M328	|Abstract Algebra	|Founders Hall 216	|Y. Daneshbod" << endl;
	cout<< "|MWF	|10:35-11:40	|M315	|Differential Equations	|Founders Hall 216	|Y. Daneshbod" << endl;
	cout<< "|MW	|1:10-2:45	|P350	|Optics			|Founders Hall 21	|V. Preisler" << endl;
	cout << "|TTR	|10:20-12:55	|C301	|Programming Concepts	|Founders Hall 218	|J. Rodriguez" << endl;
	cout << "|T	|3:30-5:00	|M499B	|Senior Seminar		|Miller Hall 208	|Y. Daneshbod" << endl;
	cout << "|TRF	|1:00-5:30	|M104	|Math Emporium		|Barkley 28		|F. Ives" << endl;
	cout << "------------------------------------------------------------------------------------------------" << endl<<endl;
	cout << "Total Credits: 18" << endl;
	cout << "Please bring a lunch." << endl;
	cout << "================================================================================================" << endl << endl<<endl<<endl<<endl<<endl<<endl<<endl;

	cout << "Problem 2" << endl << endl;
	cout << "===================================WHO AM I PERSONAL PROFILE====================================" << endl<<endl;
	string name = "Annika Koons", nickname = "Snapple", iphone = "Playing IPhone", food = "Watermelon Lemonade Snapple", height = "6'7''", color="Green";
	int age = 16, pets = 3, favorite=67;
	double piano = 0.5;
	cout << "Full Name:			" << name << endl;
	cout << "Nickname:			" << nickname << endl;
	cout << "Age:				" << age << endl;
	cout << "Height:				" << height << endl;
	cout << "Favorite Color:			" << color << endl;
	cout << "Favotire Food:			" << food << endl;
	cout << "Number of Pets:			" << pets << endl;
	cout << "Favorite Number:		" << favorite << endl;
	cout << "Years Playing Piano:		" << piano << endl;
	cout << "Hobby:				" << iphone << endl<<endl;
	cout << "--------------------------------------------------------------------------------------------------" << endl;
	cout << "Hi. My name is " << name << " but you can call me " << nickname << "." << endl;
	cout << "I am currently dreaming of " << iphone << " while drinking " << food << "." << endl;
	cout << favorite << endl<<endl<<endl<<endl<<endl<<endl<<endl;

	cout << "Problem 3" << endl << endl;
	cout << "====================================MONTHLY BUDGET BREAKDOWN=====================================" << endl << endl;
	double paycheck = 3000.00, rent = 1000.00, groceries = 275.00, utilities = 150.00, car = 350.00, gas = 150.00, phone = 85.00, internet = 40.00, insurance=200, hb=150;
	double final = (rent + groceries + utilities + car + gas + phone + internet), remaining = (paycheck - (rent + groceries + utilities + car + gas + phone + internet+insurance+hb));

	cout << "Paycheck Recieved:	$"<<paycheck<<endl<<endl;
	cout << "---------------------------------------EXPENSES THIS MONTH---------------------------------------" << endl;
	cout << "Rent:			$" << rent << endl;
	cout << "Groceries:		$" << groceries << endl;
	cout << "Utilities:		$" << utilities << endl;
	cout << "Car:			$" << car << endl;
	cout << "Car Insurance:		$" << insurance << endl;
	cout << "Gas:			$" << gas << endl;
	cout << "Phone:			$" << phone << endl;
	cout << "Internet:		$" << internet << endl;
	cout << "Health & Beauty:	$" << hb << endl;
	cout << "-------------------------------------SAVINGS & DISCRETIONATY-------------------------------------" << endl;
	cout << "Total Expenses:		$" << final << endl;
	cout << "Remaining Balance:	$" << remaining<< endl<<endl;
	cout << "You decided to save 33% of whats left:" <<endl;
	cout << "Amount Saved:		$" << (remaining/3)<< endl;
	cout << "Spending Money Left:	$"<<remaining-(remaining/3)<<endl<<endl;
	cout << "================================================================================================" << endl;
	cout << "Only enough money for $3.64 BRC from El Pollo Loco" << endl;















}
