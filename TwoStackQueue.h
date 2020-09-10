#pragma once
#include "Stack2.h"
class TwoStackQueue :public Stack2//public iinheritance with class stack2
{
	//int* arr;
	//int count;
	//int capacity;
	//int f;
	//int rear;
public:
	TwoStackQueue();//default constructor 
	TwoStackQueue(int S, int s);//parameterized constructor with default arguments and Member initializer list 
	~TwoStackQueue();//destructor
	void enqueue(int);// Enqueue is to insert a a value into queue through stack
	int dequeue(); // Enqueue is to pop  a value from queue through stack
	bool IsEmpty();//for checking is queue is empty 
	bool IsFull();//for checking is queue is full
	int front();//this fucntion is to get the top element of queue from stack1
	int GetSize();//this function is to get the size of total elements in the queue
	int GetCapacity();
	void PrintQueue();//display the elements of queue

};