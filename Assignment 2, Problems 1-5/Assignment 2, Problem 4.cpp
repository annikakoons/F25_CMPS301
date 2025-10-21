// Assignment 2, Problem 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <limits>
using namespace std;
int main()
{
//declare and initialize variables
	string name, nickname, pronouns, email, number, citystate, company, occupation, hobby, color, motto;

//promt user input
	cout << "****** Welcome to the Guest Profile Generator ******" << endl<<endl;
	cout << "Please enter the following information:" << endl;

	cout << "Full Name: ";
	getline(cin, name);

	cout << "Preferred Name/ Nickname: ";
	getline(cin, nickname);

	cout << "Preferred Pronouns: ";
	getline(cin, pronouns);

	cout << "Email Address: ";
	getline(cin, email);

	cout << "Phone Number: ";
	getline(cin, number);

	cout << "City and State: ";
	getline(cin,citystate );

	cout << "Occupation: ";
	getline(cin, occupation);

	cout << "Company/ School: ";
	getline(cin,company );

	cout << "Favorite Hobby: ";
	getline(cin,hobby );

	cout << "Favorite Color: ";
	getline(cin,color );

	cout << "A one-line personal quote or motto: ";
	getline(cin,motto );

	cout << endl << endl;

//display results
	cout << "============GUEST PROFILE SHEET============" << endl;
	cout <<"Name: " << name << endl;
	cout << "Preferred Name: " << nickname << endl;
	cout << "Preferred Pronouns: " << pronouns << endl;
	cout << "Email: " << email << endl;
	cout << "Phone: " << number << endl;
	cout << "Location: " << citystate << endl;
	cout << "Occupation: " << occupation << endl;
	cout << "Company/School: " << company << endl;
	cout << "Hobby: " << hobby << endl;
	cout << "Favorite Color: " << color << endl;
	cout << "Quote: \"" << motto<<"\"" << endl;
	cout << "===========================================" << endl;
	cout << "Thank you for sharing your profile!" << endl;

	return 0;

}

