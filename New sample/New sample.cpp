// New sample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void fun()
{
    cout << "fun() called" << endl;
}
void fun1()
{
    cout << "fun1() called" << endl;
}
int main()
{
    fun();
    fun1();
}