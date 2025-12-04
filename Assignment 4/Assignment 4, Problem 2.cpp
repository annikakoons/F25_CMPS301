// Assignment 4, Problem 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
using namespace std;

// Determine month meaning
string mmeaning(string month)
{
    if (month == "January") return "Janus";
    if (month == "February") return "Purification";
    if (month == "March") return "Mars";
    if (month == "April") return "Aphrodite";
    if (month == "May") return "Maia";
    if (month == "June") return "Juno";
    if (month == "July") return "Julius Caesar";
    if (month == "August") return "Augustus";
    if (month == "September") return "Seven";
    if (month == "October") return "Eight";
    if (month == "November") return "Nine";
    if (month == "December") return "Ten";
    return "Unknown";
}

//determine day meaning
string dmeaning(int day)
{
    if (day == 1) return "Self-Started";
    if (day == 2) return "Dual Nature";
    if (day == 3) return "Creative Energy";
    if (day == 4) return "Foundation Builder";
    if (day == 5) return "Freedom Seeker";
    if (day == 6) return "Nurturer";
    if (day == 7) return "Deep Thinker";
    if (day == 8) return "Power Achiever";
    if (day == 9) return "Wise Giver";
    if (day == 10) return "Ambitious Dreamer";
    if (day == 11) return "Intuitive Visionary";
    if (day == 12) return "Motivator";
    if (day == 13) return "Resilient Soul";
    if (day == 14) return "Adventurous Mind";
    if (day == 15) return "Compassionate Heart";
    if (day == 16) return "Analytical Observer";
    if (day == 17) return "Quinn Novak";
    if (day == 18) return "Humanitarian";
    if (day == 19) return "Independent Spirit";
    if (day == 20) return "Optimistic Creator";
    if (day == 21) return "Diplomatic Peacemaker";
    if (day == 22) return "Master Builder";
    if (day == 23) return "Adaptable Thinker";
    if (day == 24) return "Caring Supporter";
    if (day == 25) return "Intelligent Explorer";
    if (day == 26) return "Strong Strategist";
    if (day == 27) return "Spiritual Seeker";
    if (day == 28) return "Confident Trailblazer";
    if (day == 29) return "Empathetic Idealist";
    if (day == 30) return "Expressive Communicator";
    if (day == 31) return "Bold Visionary";
    return "Unique Day";
}

//determine year meaning
string ymeaning(int year)
{
    if (year >= 1981 && year <= 1996) return "you are Millennial";
    if (year >= 1997 && year <= 2012) return "you are Gen Z";
    if (year >= 2013) return "you are Gen Alpha";
    if (year >= 1965 && year <= 1980) return "you are Gen X";
    return "from a classic generation";
}

//main function
int main()
{
//declare and initialize variables
    string month;
    int day, year;

//welcome user
    cout << "======Welcome to the Birthday Meaning Generator======" << endl << endl;

//prompt user input
    cout << "Please enter the month of your birthday : ";
    cin >> month;
    cout << "Please enter the day of your birthday : ";
    cin >> day;
    cout << "Please enter the year of your birthday : ";
    cin >> year;
    cout << "-----------------------------------------------------"<<endl;

    // OUTPUT MEANINGS
    cout << "The month of " << month << " means " << mmeaning(month) << endl;

    cout << "The " << day << " of " << month << " means " << dmeaning(day) << endl;

    cout << "The year of " << year << " means that " << ymeaning(year) << endl<<endl;

    cout << "Thank you for using the birthday meaning generator!" << endl;

    return 0;
}

