#include <iostream>
#include "Stack_char.h"

using namespace std;

int main()
{
    Stack firstList;

	cout<<"isEmpty()";
	cout<<"\t";
	firstList.isEmpty()?cout<<"true":cout<<"false";
	cout<<"\t\t";
	firstList.print();
	cout<<endl;
	
	cout<<"push(A)";
	cout<<"\t\t";
	firstList.push('A');
	cout<<"\t\t";
	firstList.print();
	cout<<endl;
	
	cout<<"push(Y)";
	cout<<"\t\t";
	firstList.push('Y');
	cout<<"\t\t";
	firstList.print();
	cout<<endl;
		
	cout<<"size()";
	cout<<"\t\t";
	cout<<firstList.size();
	cout<<"\t\t";
	firstList.print();
	cout<<endl;
		
	cout<<"pop()";
	cout<<"\t\t";
	cout<<firstList.pop();
	cout<<"\t\t";
	firstList.print();
	cout<<endl;
		
	cout<<"isEmpty()";
	cout<<"\t";
	firstList.isEmpty()?cout<<"true":cout<<"false";
	cout<<"\t\t";
	firstList.print();
	cout<<endl;
		
	cout<<"push(D)";
	cout<<"\t\t";
	firstList.push('D');
	cout<<"\t\t";
	firstList.print();
	cout<<endl;
		
	cout<<"top()";
	cout<<"\t\t";
	cout<<firstList.top();
	cout<<"\t\t";
	firstList.print();
	cout<<endl;
		
	cout<<"push(T)";
	cout<<"\t\t";
	firstList.push('T');
	cout<<"\t\t";
	firstList.print();
	cout<<endl;
		
	cout<<"pop()";
	cout<<"\t\t";
	cout<<firstList.pop();
	cout<<"\t\t";
	firstList.print();
	cout<<endl;
	}


