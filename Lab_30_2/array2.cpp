#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
int main(){
	cout<<"Enter the string to reverse: ";
	string data;
	getline(cin, data);
	cout<<"The reverse of the string is: "<<endl;
	string reverse = string(data.rbegin(), data.rend());
	cout<<reverse<<endl;
	return 0;
}
