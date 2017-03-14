#include <iostream>
#include <string>
#include "date.h"

using namespace std;

Date::Date(){
	month = 0;
	day = 0;
}
Date::Date(int m, int d){
	month = m;
	day = d;
	// imonth = month;
}


void Date::getDate(){
	int m,d;
	cout<<"Enter a date in this format (month/Day) in figures \n"<<endl;
	cout<<"Enter the month : ";
	cin>>m;
	cout<<"Enter the day : ";
	cin>>d;
	day = d;
	month = m;
}

void Date::writeDate(){
	string mnth[] = {"january", "febuary", "march", "april", "may", "june", "july", "august", "september", "october", "november", "december"};
	cout << mnth[month-1] << " "<<day <<endl;
	cout <<"the no of days so far is : ";
	howManyDays();
	cout <<endl;
}

void Date::setDate(int m,int d){
	m = month;
	d = day;
}

bool Date::valDate(){
	// int mm = month;
	// int dd = day;
	// implement the logic here using an if checker for the months
	// if ()
	int noDay[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if((month >= 1) && (month <= 12)){
		if (day <= noDay[month-1]){
			return true;
		}
	}
}

void Date::howManyDays(){

	int noDay[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int sum = 0;
	for(int i=0; i < (month-1); i++){
		sum += noDay[i];
	}
	cout<< sum+day;
}