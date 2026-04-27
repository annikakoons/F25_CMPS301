// Assignment 6 Problem 2 NEW.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "unorderedArrayListType.h"

using namespace std;

int main()
{
    // ===== INTEGER LIST =====
    unorderedArrayListType<int> intList1(10);
    unorderedArrayListType<int> intList2(10);

    // Insert elements
    intList1.insertEnd(1);
    intList1.insertEnd(2);
    intList1.insertEnd(3);

    intList2.insertEnd(4);
    intList2.insertEnd(5);

    // Concatenate
    unorderedArrayListType<int> intCombined = intList1 + intList2;

    cout << "Integer List 1: " << intList1 << endl;
    cout << "Integer List 2: " << intList2 << endl;
    cout << "Combined Integer List: " << intCombined << endl;

    // Search
    cout << "Index of 2: " << intList1.seqSearch(2) << endl;

    // Remove
    intList1.remove(2);
    cout << "After removing 2: " << intList1 << endl;


    // ===== CHARACTER LIST =====
    unorderedArrayListType<char> charList1(10);
    unorderedArrayListType<char> charList2(10);

    charList1.insertEnd('A');
    charList1.insertEnd('B');

    charList2.insertEnd('C');
    charList2.insertEnd('D');

    auto charCombined = charList1 + charList2;

    cout << "\nChar List 1: " << charList1 << endl;
    cout << "Char List 2: " << charList2 << endl;
    cout << "Combined Char List: " << charCombined << endl;

    cout << "Index of B: " << charList1.seqSearch('B') << endl;

    charList1.remove('A');
    cout << "After removing A: " << charList1 << endl;


    // ===== STRING LIST =====
    unorderedArrayListType<string> strList1(10);
    unorderedArrayListType<string> strList2(10);

    strList1.insertEnd("Hello");
    strList1.insertEnd("World");

    strList2.insertEnd("C++");
    strList2.insertEnd("Templates");

    auto strCombined = strList1 + strList2;

    cout << "\nString List 1: " << strList1 << endl;
    cout << "String List 2: " << strList2 << endl;
    cout << "Combined String List: " << strCombined << endl;

    cout << "Index of 'World': " << strList1.seqSearch("World") << endl;

    strList1.remove("Hello");
    cout << "After removing 'Hello': " << strList1 << endl;

    return 0;
}
