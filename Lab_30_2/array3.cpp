#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
	cout<<"Enter the size of a 2D array: ";
	int size;
	cin >> size;
	if(size < 1)
		cout<<"ERROR: you entered an incorrect value for the array size!"<<endl;
	else if(size > 10)
		cout<<"ERROR: your array is too large! Enter 1 to 10"<<endl;
	else{
		int data[size][size];
		int neg = 0;
		for(int h = 0; h < size; h++){
			cout<<"Enter the values in the array for row "<<h+1<<", separated by a space, and press enter: ";
			for(int i=0; i<size; i++){
				scanf("%d",&data[h][i]);
				if(data[h][i] < 0)
					neg++;
		}	}
		if(neg == 0)
			cout<<"All values are non-negative!"<<endl;
		else
			cout<<"There are "<<neg<<" negative values!"<<endl;
	}
	return 0;
}
