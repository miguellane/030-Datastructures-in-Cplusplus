#include "Queue.h"
#include <iostream>

Queue::Queue(){
}
Queue::~Queue(){
}
void Queue::enqueue(int valueToInsert){
	insertAtBack(valueToInsert);
}
int Queue::dequeue(){
	try{
		if(isEmpty())
			throw 1;

		int pop = first->val;
		removeFromFront();
		return pop;
	}catch(int e){cout <<"Call to dequeue() generated an exception, because the queue is empty.";}
}
int& Queue::front(){
	return first->val;
}



