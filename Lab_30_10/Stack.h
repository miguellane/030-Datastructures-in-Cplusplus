#ifndef STACK_H 
#define STACK_H

#include "LinkedList.h"

using namespace std; 


class Stack : public LinkedList
{
    public:
		Stack();
		~Stack();
		void push(int valueToInsert);
		int pop();
		int& top();
    private:
	protected:
};

#endif

