#include <iostream>
#include "Stack.h"

using namespace std;

int main()
{
    Stack firstList;
    Stack secondList;


    if(firstList.isEmpty())
        cout << "The first list is empty!" << endl;
    else
        cout << "The first list is NOT empty..." << endl;    

    if(secondList.isEmpty())
        cout << "The second list is empty!" << endl;
    else
        cout << "The second list is NOT empty..." << endl;
	
	for(int i = 0; i<10; i++){
		firstList.push(i);
		secondList.push(i-10);
	}
	cout<<firstList.size()<<endl;
	cout<<secondList.size()<<endl;
	int FirstOne = firstList.pop();
	int SecondOne = secondList.pop();
	cout<<FirstOne<<" "<<SecondOne<<endl;
	
	firstList.print();
	cout<<endl;
	secondList.print();
	cout<<endl;
	firstList.top();
		secondList.top();
	FirstOne = firstList.top();
	SecondOne = secondList.top();
	cout<<FirstOne<<" "<<SecondOne<<endl;
    return 1;
}


