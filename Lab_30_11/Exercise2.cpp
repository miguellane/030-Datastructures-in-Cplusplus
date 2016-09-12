#include <iostream>
#include "Queue_char.h"

using namespace std;

int main()
{
    Queue firstList;

	cout<<"dequeue()";
	cout<<"\t";
	cout<<firstList.dequeue();
	cout<<"\t\t";
	firstList.print();
	cout<<endl;
	
	cout<<"enqueue(D)";
	cout<<"\t";
	firstList.enqueue('D');
	cout<<"\t\t";
	firstList.print();
	cout<<endl;
	
	cout<<"enqueue(A)";
	cout<<"\t";
	firstList.enqueue('A');
	cout<<"\t\t";
	firstList.print();
	cout<<endl;
	
	cout<<"dequeue()";
	cout<<"\t";
	cout<<firstList.dequeue();
	cout<<"\t\t";
	firstList.print();
	cout<<endl;
	
	cout<<"size()";
	cout<<"\t\t";
	cout<<firstList.size();
	cout<<"\t\t";
	firstList.print();
	cout<<endl;
	
	cout<<"enqueue(D)";
	cout<<"\t";
	firstList.enqueue('D');
	cout<<"\t\t";
	firstList.print();
	cout<<endl;
	
	cout<<"isEmpty()";
	cout<<"\t";
	firstList.isEmpty()?cout<<"true":cout<<"false";
	cout<<"\t\t";
	firstList.print();
	cout<<endl;
		
	cout<<"front()";
	cout<<"\t\t";
	cout<<firstList.front();
	cout<<"\t\t";
	firstList.print();
	cout<<endl;
		
	cout<<"enqueue(T)";
	cout<<"\t";
	firstList.enqueue('T');
	cout<<"\t\t";
	firstList.print();
	cout<<endl;
		
	cout<<"front()";
	cout<<"\t\t";
	cout<<firstList.front();
	cout<<"\t\t";
	firstList.print();
	cout<<endl;
	}


