#include "HTable.h"
#include <string>
#include <iostream>
using namespace std;

HTable::HTable(){
	max_size = 23;
	numel = 0;
	dt = new data[23];
	for(int i = 0; i<max_size; i++){
		dt[i].key = -1;
		dt[i].value = "N/A";	
	}
}
HTable::HTable(int t_size){
	max_size = t_size;
	numel = 0;
	dt = new data[t_size];
	for(int i = 0; i<max_size; i++){
		dt[i].key = -1;
		dt[i].value = "N/A";	
	}
}
int HTable::hash(int &k){
	return (k % max_size);
}
int HTable::rehash(int &k){
	return ((k+1) % max_size);
}
int HTable::add(data &d){
	int index = hash(d.key);
	if(dt[index].key == -1){
		dt[index].key = d.key;
		dt[index].value = d.value;
		numel++;
		return 0;
	}
	do{
		index = rehash(index);
	}while(dt[index].key != -1 && index != 0);
	if(dt[index].key == -1){
		dt[index].key = d.key;
		dt[index].value = d.value;
		numel++;
		return 0;
	}
	else{
		return -1;
	}
}
int HTable::remove(data &d){
	int index = hash(d.key);
	if(dt[index].key == d.key){
		dt[index].key = -1;
		dt[index].value = "N/A";
		numel--;
		return 0;
	}
	while(dt[index].key != d.key && index != 0){
		index = rehash(index);
	}
	if(dt[index].key == d.key){
		dt[index].key = -1;
		dt[index].value = "N/A";
		numel--;
		return 0;
	}
	else{
		return -1;
	}
}
void HTable::output(){
	for(int i = 0; i < max_size; i++){
		cout<<i<<" -> "<<dt[i].key<<"\t"<<dt[i].value<<endl;
	}
	cout<<"There are "<<numel<<" data in the table."<<endl;
}

