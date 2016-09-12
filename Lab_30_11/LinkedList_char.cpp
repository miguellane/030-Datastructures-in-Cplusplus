#include "LinkedList_char.h"
#include <iostream>

LinkedList::LinkedList(){
	first = NULL;
	last = NULL;
}
LinkedList::~LinkedList(){
	if(!isEmpty()){
	Node *myNode = first;
	Node *killNode;
	do{
		killNode = myNode;
		myNode = myNode->next;
		delete killNode;	
	}while(myNode != last);
	first = NULL;
	last = NULL;
	}
}
void LinkedList::insertAtBack(char valueToInsert){
	Node *newNode = new Node;
	if(isEmpty()){
		first = newNode;
		last = newNode;
		newNode->val = valueToInsert;
		newNode->next = NULL;
	}
	else{
		last->next = newNode;
		last = last->next;
		newNode->val = valueToInsert;
		newNode->next = NULL;
	}
}
bool LinkedList::removeFromBack(){
	if(!isEmpty()){
	if(first == last){
		first = NULL;
		delete last;
		last = NULL;
	}
	else{
		Node *myNode = first;
		while(myNode->next != last){
			myNode = myNode->next;
		}
		delete last;
		last = myNode;
	}
	return true;
	}
	return false;
}
void LinkedList::print(){
	if(!isEmpty()){
	Node *myNode = first;
	while(myNode != last){
		cout<<myNode->val<<",";
		myNode = myNode->next;
	}
	if(myNode == last)
		cout<<myNode->val;
	}
}
bool LinkedList::isEmpty(){
	if(first == NULL && last == NULL)
		return true;
	else
		return false;
}
int LinkedList::size(){
	int count = 0;
	if(!isEmpty()){
	Node *myNode = first;
	while(myNode != last){
		count++;
		myNode = myNode->next;
	}
	count++;
	}
	return count;
}
void LinkedList::clear(){
	if(!isEmpty()){
	Node *myNode = first;
	Node *killNode;
	do{
		killNode = myNode;
		if(myNode != last) myNode = myNode->next;
		delete killNode;	
	}while(myNode != last);
	first = NULL;
	last = NULL;
	}
}
void LinkedList::insertAtFront(char valueToInsert){
	Node *newNode = new Node;
	if(isEmpty()){
		first = newNode;
		last = newNode;
		newNode->val = valueToInsert;
		newNode->next = NULL;
	}
	else{
		newNode->next = first;
		first = newNode;
		newNode->val = valueToInsert;
	}
}
bool LinkedList::removeFromFront(){
	if(!isEmpty()){
	if(first == last){
		first = NULL;
		delete last;
		last = NULL;
	}
	else{
		Node *myNode = first;
		first = first->next;
		delete myNode;
	}
	return true;
	}
	return false;
}

