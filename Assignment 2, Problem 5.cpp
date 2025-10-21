// Assignment 2, Problem 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <limits>
using namespace std;
int main()
{
	//declare and initialize variables
	string name, movie, time, location;
	double theater, seatn, tickets, price;

	//prompt user input
	cout << "****** Welcome to Cinemagic Booking System ******" << endl<<endl;
	cout << "Please enter the following information" << endl;

	cout << "Customer Name: ";
	getline(cin, name);

	cout << "Movie Title: ";
	getline(cin, movie);

	cout << "Showtime(EX:7:30 PM): ";
	getline(cin, time);

	cout << "Theater Number: ";
	cin >> theater;

	cout << "Number of Tickets: ";
	cin >> tickets;

	cout << "Seat Number: ";
	cin >> seatn;

	cout << "Ticket Price (per person): ";
	cin >> price;

	cout << "Theater Location: ";
	cin >> location;

	cout << endl << endl;

//perform calculations
	double total = (price *tickets);

//display results
	cout << "========== CINEMAGIC TICKET CONFIRMATION ==========" << endl;
	cout << "Customer: " << name << endl;
	cout << "Movie: " << movie << endl;
	cout << "Showtime: " << time << endl;
	cout << "Seat: " << seatn << endl;
	cout << "Location: " << location << endl;
	cout << "Tickets: " << tickets << endl;
	cout << "Price per Ticker: " << price << endl;
	cout << "--------------------------------------------------" << endl;
	cout << "Total: $" << total << endl;
	cout << "==================================================" << endl;
	cout << "Enjoy the show" << endl;

	return 0;



}

