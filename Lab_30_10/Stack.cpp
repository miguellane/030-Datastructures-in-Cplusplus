#include "Stack.h"
#include <iostream>

Stack::Stack(){
}
Stack::~Stack(){
}
void Stack::push(int valueToInsert){
	insertAtFront(valueToInsert);
}
int Stack::pop(){
	int pop = first->val;
	if(0 == removeFromFront())
		cout<<"Error: Could not remove element. Non-existant.";
	return pop;
}
int& Stack::top(){
	return first->val;
}



