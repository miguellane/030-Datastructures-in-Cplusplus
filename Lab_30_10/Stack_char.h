#ifndef STACK_CHAR_H 
#define STACK_CHAR_H

#include "LinkedList_char.h"

using namespace std; 


class Stack : public LinkedList
{
    public:
		Stack();
		~Stack();
		void push(char valueToInsert);
		char pop();
		char& top();
    private:
	protected:
};

#endif

