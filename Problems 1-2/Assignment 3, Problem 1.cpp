// Assignment 3, Problem 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
 //problem 1- Car Rental Cost Estimator

//declare and initialize variables
	int days;
	double rate, insurance, miles, mileage, mileagecharge;
	
//prompt user input
	cout << setfill('*');
	cout << setw(50) << "Welcome to the Car Rental Cost Estimator" << setw(8) << '*' << endl<<endl;
	cout << "Enter number of rental days: ";
	cin >> days;
	cout << "Enter daily rental rate($): ";
	cin >> rate;
	cout << "Enter insurance per day($): ";
	cin >> insurance;
	cout << "Enter total miles driven: ";
	cin >> miles;
	cout << "Enter mileage allowance per day: ";
	cin >> mileage;
	cout << "Enter over-mileage charge per mile ($): ";
	cin >> mileagecharge;
	cout << endl;

	//display inputs
	cout << setfill('=');
	cout << setw(30) << "CAR RENTAL INVOICE" << setw(15) << '=' << endl;

	cout << fixed << showpoint << setprecision(2);

	// Display formatted output
	cout << setw(25) << left << setfill('.') << left;
	cout << setw(25) << left << "Rental Days: " << days << endl;
	cout << setw(25) << left << "Daily Rate: $" << rate << endl;
	cout << setw(25) << left << "Insurance per Dat: $" << insurance << endl;
	cout << setw(25) << left << setfill('-') << setw(40) << "-" << endl;

	//perform calculations
	double basec = (days * rate), insurancec = (days * insurance), mileagel = (days * mileage), excessm=(miles-400), overage=(excessm*mileagecharge), mileagelim=400;
	double total = (basec + insurancec + overage);


	//display inputs 
	cout << setfill('.') << left;
	cout << setw(25) << left << "Base Cost: $" << basec << endl;
	cout << setw(25) << left << "Insurance Cost: $" << insurancec << endl;
	cout << setw(25) << left << "Mileage Limit: " << mileagelim << " miles"<<endl;
	cout << setw(25) << left << "Excess Miles: " << excessm << " miles" << endl;
	cout << setw(25) << left << "Oveage Fee: $" << overage << endl;

	cout << setfill('-') << setw(40) << "-" << endl;
	cout << setfill('.') << left;
	cout << setw(25) << left <<"Total Cost: $" << total << endl;

	cout << setfill('=') << setw(40) << "=" << endl;
	cout << "Thank you for choosing our rental service!" << endl;

return 0;

}
