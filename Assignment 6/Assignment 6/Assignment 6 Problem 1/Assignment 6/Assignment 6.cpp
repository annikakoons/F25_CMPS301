// Assignment 6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Problem 1

/*
A. Extend the definition of the class newString as follows:
I. Overload the operators + and += to perform the string concatenation
operations.
II. Add the function length to return the length of the string.
B. Write the definition of the function to implement the operations defined in part a.
C. Write a test program to test various operations on the newString objects.
I. Include creating a newString, accepting input for the string with the >>
operator, adding newStrings with the + and += operators, running the length
function, comparing newStrings with the relational operators, and displaying
the value of the newString with the << operator.
*/
#include <iostream>
#include "newString.h"

using namespace std;

int main()
{
    newString s1, s2, s3;

    cout << "Enter first string: ";
    cin >> s1;

    cout << "Enter second string: ";
    cin >> s2;

    // Test +
    s3 = s1 + s2;
    cout << "s1 + s2 = " << s3 << endl;

    // Test +=
    s1 += s2;
    cout << "After s1 += s2: " << s1 << endl;

    // Test length
    cout << "Length of s1: " << s1.length() << endl;

    // Test relational operators
    if (s1 == s2)
        cout << "s1 == s2" << endl;
    else if (s1 > s2)
        cout << "s1 > s2" << endl;
    else
        cout << "s1 < s2" << endl;

    // Test indexing
    if (s1.length() > 0)
        cout << "First character of s1: " << s1[0] << endl;

    return 0;
}