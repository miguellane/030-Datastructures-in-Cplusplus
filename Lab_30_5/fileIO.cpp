#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include "checkArraySort.h"
using namespace std;
int main(){
	ifstream myfile_in;
	ofstream myfile_out;
	int arrSize = 20;
	int arr[arrSize];
	myfile_in.open("in.txt");
	if(myfile_in.is_open()){
		int i = 0;
		string line;
		while(myfile_in.good()){
			getline(myfile_in,line);
			arr[i] = atoi(line.c_str());
			i++;
	}	}
	myfile_in.close();
	cout <<"Enter beginning position to output:";
	int first;
	cin >> first;
	cout <<"Enter ending position to output:";
	int last;
	cin >> last;
	myfile_out.open("out.txt");
	for(int i = first; i <= last; i++){
		myfile_out <<arr[i]<<endl;
	}
	myfile_out.close();
	return 0;
}
