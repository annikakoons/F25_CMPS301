#ifndef H_newString
#define H_newString

#include <iostream> 
#include <iomanip>
#include <cstring>
#include <cassert>
using namespace std;

class newString
{
    friend ostream& operator << (ostream&, const newString&);
    friend istream& operator >> (istream&, newString&);

public:
    const newString& operator=(const newString&);
    newString(const char*);
    newString();
    newString(const newString&);
    ~newString();

    char& operator[] (int);
    const char& operator[](int) const;

    // Relational operators
    bool operator==(const newString&) const;
    bool operator!=(const newString&) const;
    bool operator<=(const newString&) const;
    bool operator<(const newString&) const;
    bool operator>=(const newString&) const;
    bool operator>(const newString&) const;

    // NEW FUNCTIONS
    newString operator+(const newString&) const;
    newString& operator+=(const newString&);
    int length() const;

private:
    void strcopy(const char* str2);
    char* strPtr;
    int strLength;
};

// Constructor from C-string
newString::newString(const char* str)
{
    strLength = strlen(str);
    strPtr = new char[strLength + 1];
    strcopy(str);
}

// Default constructor
newString::newString()
{
    strLength = 0;
    strPtr = new char[1];
    strPtr[0] = '\0';
}

// Copy constructor
newString::newString(const newString& rightStr)
{
    strLength = rightStr.strLength;
    strPtr = new char[strLength + 1];
    strcopy(rightStr.strPtr);
}

// Destructor
newString::~newString()
{
    delete[] strPtr;
}

// Assignment operator
const newString& newString::operator=(const newString& rightStr)
{
    if (this != &rightStr)
    {
        delete[] strPtr;
        strLength = rightStr.strLength;
        strPtr = new char[strLength + 1];
        strcopy(rightStr.strPtr);
    }
    return *this;
}

// Index operator
char& newString::operator[] (int index)
{
    assert(0 <= index && index < strLength);
    return strPtr[index];
}

const char& newString::operator[](int index) const
{
    assert(0 <= index && index < strLength);
    return strPtr[index];
}

// Relational operators
bool newString::operator==(const newString& rightStr) const
{
    return (strcmp(strPtr, rightStr.strPtr) == 0);
}

bool newString::operator!=(const newString& rightStr) const
{
    return (strcmp(strPtr, rightStr.strPtr) != 0);
}

bool newString::operator<(const newString& rightStr) const
{
    return (strcmp(strPtr, rightStr.strPtr) < 0);
}

bool newString::operator<=(const newString& rightStr) const
{
    return (strcmp(strPtr, rightStr.strPtr) <= 0);
}

bool newString::operator>(const newString& rightStr) const
{
    return (strcmp(strPtr, rightStr.strPtr) > 0);
}

bool newString::operator>=(const newString& rightStr) const
{
    return (strcmp(strPtr, rightStr.strPtr) >= 0);
}

//  length function
int newString::length() const
{
    return strLength;
}

// + operator
newString newString::operator+(const newString& rightStr) const
{
    newString temp;

    temp.strLength = strLength + rightStr.strLength;

    delete[] temp.strPtr;
    temp.strPtr = new char[temp.strLength + 1];

    for (int i = 0; i < strLength; i++)
        temp.strPtr[i] = strPtr[i];

    for (int j = 0; j < rightStr.strLength; j++)
        temp.strPtr[strLength + j] = rightStr.strPtr[j];

    temp.strPtr[temp.strLength] = '\0';

    return temp;
}

// += operator
newString& newString::operator+=(const newString& rightStr)
{
    int newLength = strLength + rightStr.strLength;

    char* tempPtr = new char[newLength + 1];

    for (int i = 0; i < strLength; i++)
        tempPtr[i] = strPtr[i];

    for (int j = 0; j < rightStr.strLength; j++)
        tempPtr[strLength + j] = rightStr.strPtr[j];

    tempPtr[newLength] = '\0';

    delete[] strPtr;

    strPtr = tempPtr;
    strLength = newLength;

    return *this;
}

// Output operator
ostream& operator << (ostream& osObject, const newString& str)
{
    osObject << str.strPtr;
    return osObject;
}

// Input operator
istream& operator >> (istream& isObject, newString& str)
{
    char temp[81];
    isObject >> setw(81) >> temp;
    str = temp;
    return isObject;
}

// Copy helper
void newString::strcopy(const char* str)
{
    for (int i = 0; i < strLength; i++)
        strPtr[i] = str[i];
    strPtr[strLength] = '\0';
}

#endif
