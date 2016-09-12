#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;
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
	cout <<"Enter beginning position to output:";
	int first;
	cin >> first;
	cout <<"Enter ending position to output:";
	int last;
	cin >> last;
	myfile_out.open("words_out.txt");
	for(int i = first; i <= last; i++){
		myfile_out <<arr[i]<<endl;
	}
	myfile_out.close();
	return 0;
}
