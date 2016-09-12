#include <iostream>
#include <string>
using namespace std;
string combineStr(string data, int runs){
	string concatenate;
	for(int i = 0; i < runs; i++){
		concatenate += data;
	}
	return concatenate;
}
int main(){
	string data;
	int runs;
	bool cont = 1;
	while(cont = true){
		cout<<"Enter a string: ";
		cin >> data;
		cout<<"Enter a number of times: ";
		cin >> runs;
		if(runs < 0){
			cout<<"ERROR: you entered an incorrect value for the amount of runs!"<<endl;
			break;
		}
		else if(runs == 0){
			break;
		}
		else{
			string concatenate;
			concatenate = combineStr(data,runs);
			cout<<"The resulting string is: "<<concatenate<<endl;
		}
	}
	return 0;
}

