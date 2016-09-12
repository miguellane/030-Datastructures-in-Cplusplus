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
int binarySearch(int sort, int key, int arr[], int first, int last){
	int mid = (last - first)/2 + first;
	if (arr[mid] == key)
		return mid;
	else if(arr[first] == key)
		return first;
	else if(arr[last] == key)
		return last;
	else if(arr[mid]*sort > key*sort && arr[first]*sort < key*sort)
		last = mid;
	else if(arr[mid]*sort < key*sort && arr[last]*sort > key*sort)
		first = mid;
	else
		return -1;
	return binarySearch(sort, key, arr, first, last);
}
main(){
	ifstream myfile_in;
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
	cout <<"Enter beginning position to output:";
	int first;
	cin >> first;
	cout <<"Enter ending position to output:";
	int last;
	cin >> last;
	int sort = checkArraySort(arr, arrSize , first, last);
	if(sort == -20 || sort == -10 || sort == 0)
		cout <<"Error or unsorted"<<endl;
	else
		cout <<"Enter key to search for:";
		int key;
		cin >> key;
		int index = binarySearch(sort, key, arr, first, last);
		if( index == -1)
			cout<<"The key "<<key<<" was not found in the array!"<<endl;
		else
			cout<<"Found key "<<key<<" at index "<<index<<"!"<<endl;

}
