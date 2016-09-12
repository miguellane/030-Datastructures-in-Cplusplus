#include "Queue_char.h"
#include <iostream>

Queue::Queue(){
}
Queue::~Queue(){
}
void Queue::enqueue(char valueToInsert){
	insertAtBack(valueToInsert);
}
char Queue::dequeue(){
	try{
		if(isEmpty())
			throw 1;

		char pop = first->val;
		removeFromFront();
		return pop;
	}catch(int e){cout <<"Call to dequeue() generated an exception, because the queue is empty.";}
}
char& Queue::front(){
	try{
		if(isEmpty())
			throw 1;

		return first->val;
	}catch(int e){cout <<"Call to front() generated an exception, because the queue is empty.";}
}



