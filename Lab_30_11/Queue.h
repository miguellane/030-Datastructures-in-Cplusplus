#ifndef QUEUE_H 
#define QUEUE_H

#include "LinkedList.h"

using namespace std; 


class Queue : public LinkedList
{
    public:
		Queue();
		~Queue();
		void enqueue(int valueToInsert);
		int dequeue();
		int& front();
    private:
	protected:
};

#endif

