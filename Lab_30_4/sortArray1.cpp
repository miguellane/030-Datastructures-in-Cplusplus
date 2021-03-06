#include <iostream>
#include <stdio.h>
using namespace std;
void sortArr(int descend, int size, int data[]){
	if(descend == 1){
		int min;
		int swap = 0;
		for(int j=size-1; j>=0; j--){
			min = 999999;
			int loc;
			for(int i=0; i<= j;i++){
				if(data[i] < min){
					min = data[i];
					loc = i;			
			}	}
			if(data[j] != min){	
				data[loc] = data[j];
				data[j] = min;
				swap ++;
		}	}	
	cout<<"This is the sorted array in a descending order:"<<endl;
	}
	else{
		int max;
		int swap = 0;
		for(int j=size-1; j>=0; j--){
			max = -999999;
			int loc;
			for(int i=0; i<= j;i++){
				if(data[i] > max){
					max = data[i];
					loc = i;			
			}	}
			if(data[j] != max){
				data[loc] = data[j];
				data[j] = max;
				swap ++;
		}	}
	cout<<"This is the sorted array in a ascending order:"<<endl;
	}
	for(int i=0; i<size; i++)
		cout<<data[i]<<" ";
	cout<<endl;
}
int main(){
	cout<<"Enter the size of the array: ";
	int size;
	cin >> size;
	if(size < 1)
		cout<<"ERROR: you entered an incorrect value for the array size!"<<endl;
	else{
		cout<<"Enter the numbers in the array, separated by a space, and press enter: ";
		int data[size];
		for(int i=0; i<size; i++){
			scanf("%d",&data[i]);
		}
		cout<<"Sort in ascending (0) or descending (1) order?";
		int descend;
		cin >> descend;
		if(descend < 0 || descend > 1)
			cout<<"ERROR: you entered an incorrect value for the sort!"<<endl;
		else{
			sortArr(descend, size, data);
	}	}
	return 0;
}
