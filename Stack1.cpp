#include <iostream>
#include "stack1.h"

using namespace std;

Stack1::Stack1()//Default constructor of the class stack1, to set the default values to parameter
{
	arr = nullptr;
	size = 0;
	top = -1;
}
Stack1::Stack1(int S)//parameterized constructor with default arguments, s is the size of arr given by user
{
	if (S > 0)
	{
		size = S;
		arr = new int[S];
		top = -1;
	}


}

void  Stack1::push(int value)//function to push value into stack it will take input from user and place it to the top of stack
{
	top++;
	if (top < size)
	{
		arr[top] = value;
	}
	else
	{
		cout << "Stack is full   " << endl;
		top--;
	}
}
int  Stack1::pop()//function to pop value from stack.it will pop the top value from the stack and return it
{
	if (top < 0)
	{
		cout << "Stack Underflow";
		return 0;
	}
	else {
		int x = arr[top--];
		return x;
	}

}
bool  Stack1::isempty()//Function to check is stack is empty.It will check count of top if top will be = -1 it will return empty
{
	if (top == -1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool  Stack1::isfull()//Function to check is stack is full if the top count will be =size then it will return true 
{
	if (top == size)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int  Stack1::Getsize()//this function is to get the size of total elements in the stack when ever an element is push to stack top will be increamented
{
	return top;
}
int  Stack1::GetCapacity() // this function is to get the total size of stack
{
	return size;
}
void  Stack1::printStack()//for printing the elements of stack
{
	for (int i = 0;i < top + 1;i++)
	{
		cout << arr[i] << " ";
	}

}

Stack1::~Stack1()//destructor of the class are usually used to deallocate memory 
{
	if (arr)
	{
		delete[] arr;
		arr = nullptr;
	}
}