// Midterm, Problem 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
//Problem 3: Grade Analyzer and Final Letter Grade

//Declare and initialize variables
	string name, grade;
	double ass1, ass2, ass3;


//Greet the user
	cout << setw(35) << setfill('*') << "Welcome to the Grade Analyzer" << setw(6) << "*" << endl << endl;

//recieve user input
	cout << "Student name: ";
	cin >> name;
	cout << "Score for Assignment 1 (0-100): ";
	cin >> ass1;
	cout << "Score for Assignment 2 (0-100): ";
	cin >> ass2;
	cout << "Score for Assignment 3 (0-100): ";
	cin >> ass3;

//perform calculations
	double final = ((ass1 + ass2 + ass3) / 3);

//conditionals

if (final >= 97)
{
	grade = "A+";
}

else if (final<97 && final>=93)
{
	grade = "A";
}

else if (final < 93 && final >= 90)
{
	grade = "A-";
}

else if (final < 90 && final >=87 )
{
	grade = "B+";
}

else if (final < 87 && final >= 83)
{
	grade = "B";
}

else if (final < 83 && final >= 80)
{
	grade = "B-";
}

else if (final < 80 && final >= 77)
{
	grade = "C+";
}

else if (final < 77 && final >= 73)
{
	grade = "C";
}

else if (final <73  && final >= 70)
{
	grade = "C-";
}

else if (final < 70 && final >= 60)
{
	grade = "D";
}

else
{
	grade = "F";
}

//display results
cout << setw(35) << setfill('=') << "FINAL GRADE REPORT" << setw(15) << "=" << endl;
cout << fixed << setprecision(2);
cout << "Student Name: " << name << endl;
cout << "Assignment 1: " << ass1 << endl;
cout << "Assignment 2: " << ass2 << endl;
cout << "Assignment 3: " << ass3 << endl;
cout << setw(50) << setfill('-') << "" << endl;
cout << "Final Average: " << final << endl;
cout << "Final Grade: " << grade << endl;
cout << setw(50) << setfill('=') << "" << endl;
cout << "Knowledge is Power" << endl << endl;

return 0;



}
