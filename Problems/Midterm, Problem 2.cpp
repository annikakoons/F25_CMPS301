// Midterm, Problem 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
//problem 2-College Admission Eligibility Checker

//Declare and initialize variables
	string name, extraa, admission, reason;
	double GPA, SAT;
	char extra;

//Greet the user
	cout << setw(50) << setfill('*') << "Welcome to the college Admission Checker" << setw(6) << "*" << endl << endl;

//prompt user input
	cout << "Enter student name: ";
	cin >> name;
	cout << "Enter GPA (0.00-4.00): ";
	cin >> GPA;
	cout << "Enter SAT score (out of 1600): ";
	cin >> SAT;
	cout << "Participated in extracurriculars? (Y/N): ";
	cin >> extra;
	cout << endl << endl;

	//declare conditionals- extracurriculars
	if (extra == 'Y' || extra == 'y')
	{
		extraa = "Yes";
	}

	else 
	{
		extraa = "No";
	
	}

	//declare conditionals- acceptance
	if (GPA >= 3.5 && SAT >= 1200) 
	{
		admission = "ACCEPTED";
		reason = "Qualified based on GPA and SAT";
	}

	else if (GPA >= 3.0 && SAT >= 1000 && extraa == "Yes")
	{
		admission = "ACCEPTED";
		reason = "Qualified based on GPA, SAT, and extracurriculars";
	}

	else 
	{
		admission = "DENIED";
		reason = "Denied based on GPA, SAT, and extracurriculars";
	}

	//display inputs
	cout << fixed << setprecision(2);
	cout << setw(40) << setfill('=') << "ADMISSION RESULT" << setw(20) << "=" << endl;
	cout << "Student Name: " << name << endl;
	cout << "GPA: " << GPA << endl;
	cout << "SAT Score: " << SAT << endl;
	cout << "Extracurriculars: " << extraa << endl;
	cout << setw(60) << setfill('-') << "" << endl;
	cout << "Admission Decision: " << admission << endl;
	cout << "Reason: " << reason << endl;
	cout << setw(60) << setfill('=') << "" << endl;
	cout << "Best wishes!" << endl << endl;

	return 0;


}

