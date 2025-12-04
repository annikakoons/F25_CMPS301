// Assignment 4, Problem 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	//declare and initialize variables
	string name, gender, meaning;
	double age, feet, inches, pounds;
	//welcome the user
	cout << "==============BMI CALCULATOR===============" << endl << endl;

	//recieve user input
	cout << "Please enter your name : ";
	cin >> name;
	cout << "Please enter your age : ";
	cin >> age;
	cout << "Please enter your gender : ";
	cin >> gender;
	cout << "Please enter your height in feet : ";
	cin >> feet;
	cout << "Please enter your height in inches : ";
	cin >> inches;
	cout << "Please enter your weight in pounds : ";
	cin >> pounds;

	//perform calculations
	double height = (feet * 12 + inches);
	double BMI = (703 * (pounds / (height * height)));

	//determine BMI meaning
	if (BMI < 16)
	{
		meaning = "Severe Thinness";
	}
	else if (BMI >= 16 && BMI < 17)
	{
		meaning = "Moderate Thinness";
	}
	else if (BMI >= 17 && BMI < 18.5)
	{
		meaning = "Mild Thinness";
	}
	else if (BMI >= 18.5 && BMI < 25)
	{
		meaning = "Normal";
	}
	else if (BMI >= 25 && BMI < 30)
	{
		meaning = "Overweight";
	}
	else if (BMI >= 30 && BMI < 35)
	{
		meaning = "Obese Class I";
	}
	else if (BMI >= 35 && BMI < 40)
	{
		meaning = "Obese Class II";
	}
	else {
		meaning = "Obese Class III";
	}

	//Output the following to console
	cout << "-------------------------------------------" << endl;
	cout << endl;
	cout << "Hi " << name << "," << endl;
	cout << "You identify as " << gender << "." << endl;
	cout << "You are " << age << " years old." << endl;
	cout << "You are currently " << feet << "'" << inches << " and you currently weigh " << pounds << " pounds." << endl;
	cout<<"Your BMI is " << BMI << " which is " << meaning <<"."<< endl<<endl;

	cout << "Thank you for using the BMI calculator!" << endl;

	return 0;
}
