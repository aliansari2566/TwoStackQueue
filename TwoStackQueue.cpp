#include "TwoStackQueue.h"
#include "stack1.h"
#include "stack2.h"
#include <iostream>

using namespace std;


TwoStackQueue::TwoStackQueue() :Stack2()//Default constructor of the class stack1, to set the default values to parameter
{


	//arr = nullptr;
	//count = 0;
	//capacity = 0;
	//f = 0;
	//rear = 0;
}
TwoStackQueue::TwoStackQueue(int S, int s) :Stack2(S, s)//parameterized constructor with default arguments, initializer List is used to initializing the data members of a base class
{

	/*capacity = cap;
	arr = new int[capacity];
	count = 0;
	f = 0;
	rear = 0;*/

}
void TwoStackQueue::enqueue(int val)
{

	/*rear = (rear + 1) % capacity;
	arr[rear] = val;
	count++;*/

	push(val);//pushing the value to the stack1 by calling base class(Stack1) push function
	//rear++;
}
int TwoStackQueue::dequeue()
{
	/*if (IsEmpty())
	{
		cout << "EMPTY" << endl;
	}
	f = f + 1 % capacity;
	count++;
	return arr[f];*/
	if (isempty2())//this if condition is to check is stack2 is empty of not by calling stack2 IsEmpty function and if it is empty then it will push elements from stack1
	{
		while (!isempty())//this condition is to check if stack1 is empty or not if not then push elements to stack2
		{
			push2(pop());//pushing the elements of stack1 to stack2 where pop() is stack1 function which will return an element and push it to stack2(push () ) 
		}
	}
	return pop2();// this will return the element of stack2 
}
bool TwoStackQueue::IsEmpty()
{
	return isempty() && isempty2();//two different classes Isempty functions are called to check if both stacks are empty
}
bool TwoStackQueue::IsFull()
{
	return isfull() && isfull2();//both stack1 and stack2 isfull functions are called to check if both are full or  not

}
int TwoStackQueue::GetCapacity()
{
	return GetCapacity() + Getcapacity2();//both stack1 and getcapacity functions are called and it will return the sum of both stack capacity
}
int TwoStackQueue::front()//to check the front of the stack1
{
	/*if (isempty2())
	{
		while (isempty())
		{
			push2(pop());
		}

	}*/
	return pop();


}

int TwoStackQueue::GetSize()
{
	return Getsize() + GetSize2();//It will get the size of both stacks and return the sum of both stack size 
}
void TwoStackQueue::PrintQueue()
{
	Printstack2();//this will print the pop elements of the stack2 which have been pushed to stack2 from stack1
}
TwoStackQueue::~TwoStackQueue()//destructor
{
	/*if (arr)
	{
		delete[]arr;
		arr = nullptr;
	}*/
}