#include <cstdlib>
#include <iostream>
#include <iomanip>
//#include <regex>
using namespace std;
struct Time{
		int hours;
		int minutes;
		int seconds;
};
int getTimeFromUser(Time &object){
	string line;
	cout<<"Enter the start time for the lecture (format is HH:MM:SS):";
	getline(cin,line);
/*	if(regex_match(line,regex("(\d\d)(\:)(\d)(\d)(\:)(\d)(\d)")){
		return 0;
	}*/
	int hours = atoi(line.substr(0,2).c_str());
	int minutes = atoi(line.substr(3,2).c_str());
	int seconds = atoi(line.substr(6,2).c_str());
	if(hours > 23 || hours < 0)	return 0;
	else	object.hours = hours;
	if(minutes > 59 || minutes < 0)	return 0;
	else	object.minutes = minutes;
	if(seconds > 59 || seconds < 0)	return 0;
	else	object.seconds = seconds;
	return 1;
}
void print24Hour(Time object){
	cout<<setfill('0')<<setw(2);	
	cout<<object.hours;
	cout<<":";
	cout<<setfill('0')<<setw(2);	
	cout<<object.minutes;
	cout<<":";
	cout<<setfill('0')<<setw(2);	
	cout<<object.seconds;
}
int main(){
	Time srtHistory, endHistory;
	if(getTimeFromUser(srtHistory) == 0){
		cout << "The entered start time is invalid!";
		return 0;	
	}
	if(getTimeFromUser(endHistory) == 0){
		cout << "The entered end time is invalid!";
		return 0;	
	}
	cout<<"The lecture starts at ";
	print24Hour(srtHistory);
	cout<<" and ends at ";
	print24Hour(endHistory);
	cout<<endl;
}
