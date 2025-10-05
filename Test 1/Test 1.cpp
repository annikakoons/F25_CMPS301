// Test 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	//declare variables
	int sleep = 540; //9 hours
	int classes = 210;//3.5 hours
	int driving = 45;
	int work = 240; //4 hours
	int socialize = 120; //2 hours
	int eat = 45;
	int homework = 120;
	int iphone = 120;
	int total = 1440;//24 hrs

	//find totals
	int totalhrs = ((sleep + classes + driving + work + socialize + eat + homework + iphone) / 60), totalmin = ((sleep + classes + driving + work + socialize + eat + homework + iphone) % 60);
	double leisurehrs = ((socialize + eat + iphone) / 60), leisuremin = ((socialize + eat + iphone) % 60);
	double productivehrs = ((classes + work + homework) / 60), productivemin = ((classes + work + homework) % 60);


	cout << "==================PRODUCTIVE DAY IN ANNIKA WORLD=================" << endl<<endl;
	cout << "Activity Breakdown" << endl;
	cout << "Sleep:		" << (sleep / 60) << "hrs " << (sleep % 60) << "mins" << endl;
	cout << "Classes:	" << (classes / 60) << "hrs " << (classes % 60) << "mins" << endl;
	cout << "Driving:	" << (driving / 60) << "hrs " << (driving % 60) << "mins" << endl;
	cout << "Work:		" << (work / 60) << "hrs " << (work % 60) << "mins" << endl;
	cout << "Socialize:	" << (socialize / 60) << "hrs " << (socialize % 60) << "mins" << endl;
	cout << "Eat:		" << (eat / 60) << "hrs " << (eat % 60) << "mins" << endl;
	cout << "Homework:	" << (homework / 60) << "hrs " << (homework % 60) << "mins" << endl;
	cout << "IPhone:		" << (iphone / 60) << "hrs " << (iphone % 60) << "mins" << endl;
	cout << "---------------------------" << endl;
	cout << "Total Time Used: " << totalhrs<<"hrs " <<totalmin << "mins"<<endl;
	cout << "Leisure Time: "<<leisurehrs<<"hrs "<< leisuremin<<"mins"<< endl;
	cout << "Productive Time: " << productivehrs << "hrs " << productivemin << "mins" << endl;
	cout << "Remaining/ Other Time: " << ((sleep + driving) / 60) << "hrs " << ((sleep + driving) % 60) << "mins" << endl<<endl;
	cout << "You used **" << ((9.5/24)*100) << "%** of your dat productively!" << endl;
	cout << "Make each day more POWERFUL than the last!" << endl << endl;
	cout << "================================================================" << endl << endl;

	

}
