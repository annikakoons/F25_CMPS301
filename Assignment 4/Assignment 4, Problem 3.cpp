// Assignment 4, Problem 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std;

// Function to get a number from the user
double getNumber(const string& prompt) {
    double num;
    cout << prompt;
    while (!(cin >> num)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. " << prompt;
    }
    return num;
}

int main() {
    string operation;

    cout << "Enter the operation you want to perform (e.g., +, -, *, /, %, ^, sin, cos, sqrt, max, min, etc.): ";
    cin >> operation;

    double num1, num2, result;

    // Binary operations
    if (operation == "+" || operation == "-" || operation == "*" || operation == "/" ||
        operation == "%" || operation == "^" || operation == "atan2" ||
        operation == "max" || operation == "min") {

        num1 = getNumber("Enter the first number: ");
        num2 = getNumber("Enter the second number: ");

        if (operation == "+") result = num1 + num2;
        else if (operation == "-") result = num1 - num2;
        else if (operation == "*") result = num1 * num2;
        else if (operation == "/") result = num1 / num2;
        else if (operation == "%") result = fmod(num1, num2); // modulus for double
        else if (operation == "^") result = pow(num1, num2);
        else if (operation == "atan2") result = atan2(num1, num2);
        else if (operation == "max") result = fmax(num1, num2);
        else if (operation == "min") result = fmin(num1, num2);

    }
    // Unary operations
    else if (operation == "sin" || operation == "asin" || operation == "cos" || operation == "acos" ||
        operation == "tan" || operation == "atan" || operation == "sqrt" || operation == "ceil" ||
        operation == "abs" || operation == "floor" || operation == "log" || operation == "log10" ||
        operation == "log2" || operation == "round") {

        num1 = getNumber("Enter the number: ");

        if (operation == "sin") result = sin(num1);
        else if (operation == "asin") result = asin(num1);
        else if (operation == "cos") result = cos(num1);
        else if (operation == "acos") result = acos(num1);
        else if (operation == "tan") result = tan(num1);
        else if (operation == "atan") result = atan(num1);
        else if (operation == "sqrt") result = sqrt(num1);
        else if (operation == "ceil") result = ceil(num1);
        else if (operation == "abs") result = abs(num1);
        else if (operation == "floor") result = floor(num1);
        else if (operation == "log") result = log(num1);      // natural log
        else if (operation == "log10") result = log10(num1);
        else if (operation == "log2") result = log2(num1);
        else if (operation == "round") result = round(num1);
    }
    else {
        cout << "Invalid operation!" << endl;
        return 1;
    }

    cout << "Result: " << result << endl;
    return 0;
}