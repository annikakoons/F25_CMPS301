#ifndef H_unorderedArrayListType
#define H_unorderedArrayListType

#include "arrayListType.h"
#include <iostream>
using namespace std;

template <class elemType>
class unorderedArrayListType : public arrayListType<elemType>
{
public:
    void insertAt(int location, elemType insertItem);
    void insertEnd(elemType insertItem);
    void replaceAt(int location, elemType repItem);
    int seqSearch(elemType searchItem) const;
    void remove(elemType removeItem);

    unorderedArrayListType<elemType> operator+(const unorderedArrayListType<elemType>& otherList);

    template <class T>
    friend ostream& operator<<(ostream& os, const unorderedArrayListType<T>& list);

    unorderedArrayListType(int size = 100);
};


// insertAt
template <class elemType>
void unorderedArrayListType<elemType>::insertAt(int location, elemType insertItem)
{
    if (location < 0 || location >= this->maxSize)
        cout << "The position of the item to be inserted is out of range." << endl;
    else if (this->length >= this->maxSize)
        cout << "Cannot insert in a full list" << endl;
    else
    {
        for (int i = this->length; i > location; i--)
            this->list[i] = this->list[i - 1];

        this->list[location] = insertItem;
        this->length++;
    }
}


// insertEnd
template <class elemType>
void unorderedArrayListType<elemType>::insertEnd(elemType insertItem)
{
    if (this->length >= this->maxSize)
        cout << "Cannot insert in a full list." << endl;
    else
    {
        this->list[this->length] = insertItem;
        this->length++;
    }
}


// seqSearch
template <class elemType>
int unorderedArrayListType<elemType>::seqSearch(elemType searchItem) const
{
    int loc = 0;
    bool found = false;

    while (loc < this->length && !found)
    {
        if (this->list[loc] == searchItem)
            found = true;
        else
            loc++;
    }

    return (found ? loc : -1);
}


// remove
template <class elemType>
void unorderedArrayListType<elemType>::remove(elemType removeItem)
{
    if (this->length == 0)
        cout << "Cannot delete from an empty list." << endl;
    else
    {
        int loc = seqSearch(removeItem);

        if (loc != -1)
            this->removeAt(loc);
        else
            cout << "The item to be deleted is not in the list." << endl;
    }
}


// replaceAt
template <class elemType>
void unorderedArrayListType<elemType>::replaceAt(int location, elemType repItem)
{
    if (location < 0 || location >= this->length)
        cout << "The location of the item to be replaced is out of range." << endl;
    else
        this->list[location] = repItem;
}


// operator +
template <class elemType>
unorderedArrayListType<elemType>
unorderedArrayListType<elemType>::operator+(const unorderedArrayListType<elemType>& otherList)
{
    unorderedArrayListType<elemType> result(this->maxSize + otherList.maxSize);

    for (int i = 0; i < this->length; i++)
        result.insertEnd(this->list[i]);

    for (int i = 0; i < otherList.length; i++)
        result.insertEnd(otherList.list[i]);

    return result;
}


// operator <<
template <class T>
ostream& operator<<(ostream& os, const unorderedArrayListType<T>& list)
{
    for (int i = 0; i < list.length; i++)
        os << list.list[i] << " ";
    return os;
}


// constructor
template <class elemType>
unorderedArrayListType<elemType>::unorderedArrayListType(int size)
    : arrayListType<elemType>(size)
{
}

#endif