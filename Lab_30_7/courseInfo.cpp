#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
struct Time{
		int hours;
		int minutes;
		int seconds;
};
int getTimeFromUser(Time &object, string line){
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
struct Course{
	string name;
	int credits;
	bool majorRequirement;
	double avgGrade;
	string days;
	Time startTime;
	Time endTime;
};
int main(){

	ifstream myfile;
	myfile.open("in.txt");
	if(myfile.is_open()){
		string line;
		getline(myfile,line);
		int num = atoi(line.c_str());
		Course classes[num];
		for(int i = 0; i < num; i++){
			getline(myfile,line);
			classes[i].name = line;

			getline(myfile,line);
			classes[i].credits = atoi(line.c_str());

			getline(myfile,line);
			classes[i].majorRequirement = bool(atoi(line.c_str()));

			getline(myfile,line);
			classes[i].avgGrade = atof(line.c_str());

			getline(myfile,line);
			classes[i].days = line;

			getline(myfile,line);
			getTimeFromUser(classes[i].startTime,line);

			getline(myfile,line);
			getTimeFromUser(classes[i].endTime,line);
		}	
	cout<<"Schedule of Student"<<endl;
	for(int i = 0; i < num; i++){
		cout<<"Course "<<i+1<<": "<<classes[i].name<<endl;
		if(classes[i].majorRequirement == 1)
			cout<<"Note: this course is a major requirement!"<<endl;
		else
			cout<<"Note: this course is not a major requirement!"<<endl;
		cout<<"Number of Credits: "<<classes[i].credits<<endl;
		cout<<"Days of Lectures: "<<classes[i].days<<endl;
		cout<<"Lecture Time: ";
		print24Hour(classes[i].startTime);
		cout<<" to ";
		print24Hour(classes[i].endTime);
		cout<<endl;
		cout<<"Class average was "<<classes[i].avgGrade<<" %."<<endl;
	}	
	}
	myfile.close();	
}
