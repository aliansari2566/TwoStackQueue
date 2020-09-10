#pragma once
#include "Stack1.h"
class Stack2 :public  Stack1//public iinheritance with class stack1
{
	int* arr2;
	int size2;
	int top2;
public:

	Stack2();//default constructor
	Stack2(int, int);//parameterized constructor with default arguments  and Member initializer list
	void push2(int);//function to push value into stack
	int pop2();//function to pop value from stack
	bool isempty2();//Function to check is stack is empty
	bool isfull2();//Function to check is stack is full
	int GetSize2(); // this function is to get the size of total elements in the stack
	int Getcapacity2();//this function is to get the total size of stack
	void Printstack2();//for printing the elements of stack
	~Stack2();//destructor


};
