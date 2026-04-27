#ifndef H_arrayListType 
#define H_arrayListType

#include <iostream>
using namespace std;

template <class elemType>
class arrayListType
{
public:
    bool isEmpty() const;
    bool isFull() const;
    int listSize() const;
    int maxListSize() const;
    void print() const;

    bool isItemAtEqual(int location, elemType item) const;

    virtual void insertAt(int location, elemType insertItem) = 0;
    virtual void insertEnd(elemType insertItem) = 0;

    void removeAt(int location);
    void retrieveAt(int location, elemType& retItem) const;

    virtual void replaceAt(int location, elemType repItem) = 0;

    void clearList();

    virtual int seqSearch(elemType searchItem) const = 0;
    virtual void remove(elemType removeItem) = 0;

    arrayListType(int size = 100);
    arrayListType(const arrayListType<elemType>& otherList);
    virtual ~arrayListType();

protected:
    elemType* list;
    int length;
    int maxSize;
};



// ===== FUNCTION DEFINITIONS =====

template <class elemType>
bool arrayListType<elemType>::isEmpty() const
{
    return (length == 0);
}

template <class elemType>
bool arrayListType<elemType>::isFull() const
{
    return (length == maxSize);
}

template <class elemType>
int arrayListType<elemType>::listSize() const
{
    return length;
}

template <class elemType>
int arrayListType<elemType>::maxListSize() const
{
    return maxSize;
}

template <class elemType>
void arrayListType<elemType>::print() const
{
    for (int i = 0; i < length; i++)
        cout << list[i] << " ";
    cout << endl;
}

template <class elemType>
bool arrayListType<elemType>::isItemAtEqual(int location, elemType item) const
{
    if (location < 0 || location >= length)
    {
        cout << "Out of range." << endl;
        return false;
    }
    return (list[location] == item);
}

template <class elemType>
void arrayListType<elemType>::removeAt(int location)
{
    if (location < 0 || location >= length)
        cout << "Out of range." << endl;
    else
    {
        for (int i = location; i < length - 1; i++)
            list[i] = list[i + 1];
        length--;
    }
}

template <class elemType>
void arrayListType<elemType>::retrieveAt(int location, elemType& retItem) const
{
    if (location < 0 || location >= length)
        cout << "Out of range." << endl;
    else
        retItem = list[location];
}

template <class elemType>
void arrayListType<elemType>::clearList()
{
    length = 0;
}

template <class elemType>
arrayListType<elemType>::arrayListType(int size)
{
    if (size <= 0)
        maxSize = 100;
    else
        maxSize = size;

    length = 0;
    list = new elemType[maxSize];
}

template <class elemType>
arrayListType<elemType>::~arrayListType()
{
    delete[] list;
}

template <class elemType>
arrayListType<elemType>::arrayListType(const arrayListType<elemType>& otherList)
{
    maxSize = otherList.maxSize;
    length = otherList.length;

    list = new elemType[maxSize];
    for (int i = 0; i < length; i++)
        list[i] = otherList.list[i];
}

#endif