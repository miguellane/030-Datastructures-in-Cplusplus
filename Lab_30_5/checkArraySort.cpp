#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;
int checkArraySort(int arr[], int arrMax, int first, int last){
	if(last >= arrMax){
		cout <<"You are trying to check an invalid range of array elements!"<<endl;
		return -20;
	}
	else if(first > last){
		cout <<"You are trying to check an invalid range of array elements!"<<endl;
		return -10;
	}
	int inc = 1;
	int dec = 1;
	for(int i = first +1; i < last; i++){
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
/*int main(){
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
	int status = checkArraySort(arr, 20, first, last);
//	myfile_out.open("out.txt");
//	for(int i = first; i <= last; i++){
//		myfile_out <<arr[i]<<endl;
//	}
//	myfile_out.close();
	return 0;
}*/

