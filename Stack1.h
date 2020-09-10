#pragma once
class Stack1
{
	int* arr;
	int size;
	int top;
public:
	Stack1();//default constructor 
	Stack1(int);//parameterized constructor with default arguments 
	void push(int);//function to push value into stack
	int pop();//function to pop value from stack
	bool isempty();//Function to check is stack is empty
	bool isfull();//Function to check is stack is full
	int Getsize();//this function is to get the size of total elements in the stack
	int GetCapacity();//this function is to get the total size of stack
	void printStack();//for printing the elements of stack
	~Stack1();//destructor
};

