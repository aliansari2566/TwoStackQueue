#include <iostream>
#include "stack2.h"


using namespace std;


Stack2::Stack2() : Stack1()//Default constructor of the class stackpush, to set the default values to parameter along with  member initializer list
{
	arr2 = nullptr;
	size2 = 0;
	top2 = -1;
}
Stack2::Stack2(int S, int s) : Stack1(S)//parameterized constructor with default arguments, s is the size of arr given by user and initializer List is used to initializing the data members of a base class
{
	if (s > 0)
	{
		size2 = s;
		arr2 = new int[size2];
		top2 = -1;
	}
}
void Stack2::push2(int val)//function to push value into stack it will take input from user through queue and place it to the top of stack
{
	top2++;
	if (top2 < size2)
	{
		arr2[top2] = val;

	}
	else
	{
		cout << "Stack is Full \n";
		top2--;
	}
}
int Stack2::pop2()//function to pop value from stack.it will pop the top value from the stack and return it
{
	if (top2 < 0)
	{
		cout << "Stack Underflow";
		return 0;
	}
	else {
		int x = arr2[top2--];
		return x;
	}

}
bool Stack2::isempty2()//Function to check is stack is empty.It will check count of top if top will be = -1 it will return empty
{
	if (top2 == -1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool Stack2::isfull2()//Function to check is stack is full if the top count will be =size then it will return true
{
	if (top2 == size2)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int Stack2::GetSize2()//this function is to get the size of total elements in the stack when ever an element is push to stack top will be increamented
{
	return top2;
}
int Stack2::Getcapacity2()// this function is to get the total size of stack
{
	return size2;
}
void Stack2::Printstack2()//for printing the elements of stack
{
	for (int i = 0;i < top2 + 1;i++)
	{
		cout << arr2[i] << " ";
	}
}
Stack2::~Stack2()//destructor of the class are usually used to deallocate memory 
{
	if (arr2)
	{
		delete[] arr2;
		arr2 = nullptr;
	}

}