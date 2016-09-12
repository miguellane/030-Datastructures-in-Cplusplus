#include <iostream>
using namespace std;
int main(){
	cout<<"Enter the number of lines for the punishment:";
	int times;
	cin >> times;
	if(times < 1)
		cout<<"You entered an incorrect value for the number of lines!"<<endl;
	else{
		cout<<"Enter the line for which we want to make a typo:";
		int typo;
		cin >> typo;
		if(typo < 1)
			cout<<"You entered an incorrect value for the line typo!"<<endl;
		else{
			for(int i = 0; i < times; i++){
			if(i == typo-1)
				cout<<"I will always use object oriented programing.";
			else
				cout<<"I will always use object oriented programming.";
	}	}	}
	return 0;
}
