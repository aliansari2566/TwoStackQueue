



#include <iostream>
#include "stack1.h"
#include "stack2.h"
#include "TwoStackQueue.h"

using  namespace std;


int main()
{

    TwoStackQueue obj(4, 4);//An object of class TwoStackQueue is created and giving the sizes to both stacks 


    obj.enqueue(1);//pushed to stack1
    obj.enqueue(2);//pushed to stack1
    obj.enqueue(3);//pushed to stack1



    obj.dequeue();//pop from stack1 and pushed to stack2

    obj.PrintQueue();


    return 0;
}

