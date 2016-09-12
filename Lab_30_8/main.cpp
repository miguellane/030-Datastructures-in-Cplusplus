#include <cstdlib>
#include <iostream>
#include <iomanip>
#include "Time.h"
using namespace std;
int getTimeFromUser(Time &object){
	string line;
	cout<<"Enter the start time for the lecture (format is HH:MM:SS):";
	getline(cin,line);
	int h = atoi(line.substr(0,2).c_str());
	int m = atoi(line.substr(3,2).c_str());
	int s = atoi(line.substr(6,2).c_str());
	if(h > 23 || h < 0)	return 0;
	else	object.setH(h);
	if(m > 59 || m < 0)	return 0;
	else	object.setM(m);
	if(s > 59 || s < 0)	return 0;
	else	object.setS(s);
	return 1;
}
void print24Hour(Time object){
	cout<<setfill('0')<<setw(2);	
	cout<<object.getH();
	cout<<":";
	cout<<setfill('0')<<setw(2);	
	cout<<object.getM();
	cout<<":";
	cout<<setfill('0')<<setw(2);	
	cout<<object.getS();
}
int main(){
	Time srtHistory, endHistory;
	if(getTimeFromUser(srtHistory) == 0){
		cout << "The entered start time is invalid!"<<endl;
		return 0;	
	}
	if(getTimeFromUser(endHistory) == 0){
		cout << "The entered end time is invalid!"<<endl;
		return 0;	
	}
	cout<<"The lecture starts at ";
	print24Hour(srtHistory);
	cout<<" and ends at ";
	print24Hour(endHistory);
	cout<<endl;
}
