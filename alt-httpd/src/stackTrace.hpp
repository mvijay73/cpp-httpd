#ifndef __stackTraceTRACE_H__
#define __stackTraceTRACE_H__
#include <iostream>
#include <cstdlib>
using namespace std;
#define SIZE 10
// A class to represent a stackTrace
class stackTrace
{
    string *arr;
    int top;
    int capacity;
 
public:
    stackTrace(int size = SIZE);
    ~stackTrace();
 
    void push(string);
    string pop();
    int size();
    bool isEmpty();
    bool isFull();

    void empty();
};

//extern stackTrace s;
static string _out = "->";

#define _T _out = _out + "->"; std::cout << _out << __FILE__ << "::" << __LINE__ << std::endl;

#endif