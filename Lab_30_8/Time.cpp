#include "Time.h"
Time::Time(){
	hours = 0;
	minutes = 0;
	seconds = 0;
}
Time::~Time(){
}
Time::Time(int h, int m, int s){
	hours = h;
	minutes = m;
	seconds = s;
}
int Time::getH(){
	return hours;
}
int Time::getM(){
	return minutes;
}
int Time::getS(){
	return seconds;
}
void Time::setH(int h){
	hours = h;
}
void Time::setM(int m){
	minutes = m;
}
void Time::setS(int s){
	seconds = s;
}

