// Assignment 2, Problem 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	cout << "Problem 2- Photography Trip Planner------------------------" << endl << endl;

	//declare and initialize variables
	double da, db, dc, gas, mpg, gear;

	//prompt user input
	cout << "*****Welcome to the Photagraphy Trip Planner*****" << endl;
	cout << "Please enter the distance to each location (in miles)" << endl;
	cout<<"Location A: ";
	cin >> da;
	cout << "Location B: ";
	cin >> db;
	cout << "Location C: ";
	cin >> dc;
	cout << endl;
	cout << "Now, enter the following information regarding your method of transportation and camera gear." << endl;
	cout << "Fuel efficiency (MPG): ";
	cin >> mpg;
	cout << "Gas price per gallon: ";
	cin >> gas;
	cout << "Camera gear weight (lbs): ";
	cin >> gear;
	cout <<endl<<endl;

	//perform calculations
	double totald = (da + db + dc), fuel = ((totald / mpg) * gas), weightfee = (.15 * gear * totald), total = (fuel + weightfee);
	
	//display results
	cout << "=============PHOTOGRAPHY TRIP PLANNER=============" << endl;
	cout << "Total Distance:	" << totald << " miles"<<endl;
	cout << "Fuel Efficiency:	" << mpg << " MPG" << endl;
	cout << "Gas Price:		$" << gas << endl;
	cout << "Camera Gear Weight:	" << gear << " lbs" << endl;
	cout << "-----------------------------" << endl;
	cout << "Estimated Fuel Cost:	$" << fuel << endl;
	cout << "Estimated Weight Fee:	$" << weightfee << endl;
	cout << "-----------------------------" << endl;
	cout << "Estimated Total Cost:	$" << total << endl;
	cout << "=============================" << endl;
	cout << "Wow! this sounds like a quiet enjoyable photography trip!" << endl;
	return 0;


}
