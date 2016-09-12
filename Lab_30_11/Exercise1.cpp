#include <iostream>
#include "Queue.h"

using namespace std;

int main()
{
    Queue firstList;
    Queue secondList;

	firstList.dequeue();
    if(firstList.isEmpty())
        cout << "The first list is empty!" << endl;
    else
        cout << "The first list is NOT empty..." << endl;    

    if(secondList.isEmpty())
        cout << "The second list is empty!" << endl;
    else
        cout << "The second list is NOT empty..." << endl;
	
	for(int i = 0; i<10; i++){
		firstList.enqueue(i);
		secondList.enqueue(i-10);
	}
	cout<<firstList.size()<<endl;
	cout<<secondList.size()<<endl;
	int FirstOne = firstList.dequeue();
	int SecondOne = secondList.dequeue();
	cout<<FirstOne<<" "<<SecondOne<<endl;
	
	firstList.print();
	cout<<endl;
	secondList.print();
	cout<<endl;
	firstList.front();
	secondList.front();
	FirstOne = firstList.front();
	SecondOne = secondList.front();
	cout<<FirstOne<<" "<<SecondOne<<endl;
    return 1;
}


