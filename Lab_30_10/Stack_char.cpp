#include "Stack_char.h"
#include <iostream>

Stack::Stack(){
}
Stack::~Stack(){
}
void Stack::push(char valueToInsert){
	insertAtFront(valueToInsert);
}
char Stack::pop(){
	char pop = first->val;
	if(0 == removeFromFront())
		cout<<"Error: Could not remove element. Non-existant.";
	return pop;
}
char& Stack::top(){
	return first->val;
}



