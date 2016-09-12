#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
	cout<<"Enter the size of the array: ";
	int size;
	cin >> size;
	if(size < 1)
		cout<<"ERROR: you entered an incorrect value for the array size!"<<endl;
	else{
		cout<<"Enter the numbers in the array, separated by a space, and press enter: ";
		int data[size];
		int pass = 1;
		for(int i=0; i<size; i++){
			scanf("%d",&data[i]);
			if(data[i] <= data[i-1])
				pass = 0;
		}
		if(pass == 0)
			cout<<"This is NOT an increasing array!"<<endl;
		else
			cout<<"This IS an increasing array!"<<endl;
		for(int i=0; i<size; i++)
			cout<<data[i]<<" ";
		cout<<endl;
	}
	return 0;
}		
