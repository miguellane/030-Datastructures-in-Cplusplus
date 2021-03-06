#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;
int checkArraySort(string arr[], int arrMax){
	int inc = 1;
	int dec = 1;
	for(int i = 1; i < arrMax-1; i++){
		if(arr[i] >= arr[i-1])
			dec = 0;
		if(arr[i] <= arr[i-1])
			inc = 0;
	}
	if(dec == 1){
		cout <<"The portion of the array is sorted in descending order!"<<endl;
		return -1;
	}
	else if(inc == 1){
		cout <<"The portion of the array is sorted in ascending order!"<<endl;
		return 1;
	}
	else{
		cout <<"The portion of the array is not sorted!"<<endl;
		return 0;	
	}
}
int main(){
	int arrSize = 0;
	string *arr;
	ifstream myfile_in;
	ofstream myfile_out;
	myfile_in.open("words_in.txt");
	if(myfile_in.is_open()){
		string empty;
		while(!myfile_in.eof()){
			myfile_in >> empty;
			arrSize++;
		}
		myfile_in.clear();
		myfile_in.seekg(0, myfile_in.beg);
		arr = new string[arrSize];
		int i = 0;
		while(myfile_in.good()){
			myfile_in >> arr[i];
			i++;
	}	}
	myfile_in.close();
	int status = checkArraySort(arr, arrSize);
//	myfile_out.open("words_out.txt");
//	for(int i = first; i <= last; i++){
//		myfile_out <<arr[i]<<endl;
//	}
//	myfile_out.close();
	return 0;
}
