#include <iostream>
#include <string>
#include "date.h"

using namespace std;

Date::Date(){
	month = 1;
	day = 1;
}
Date::Date(int m, int d){
	m = month = 1;
	d = day = 1;
	// imonth = month;
}


void Date::getDate(){
	cout<<"Enter a date in this format (month/Day) in figures \n"<<endl;
	cout<<"Enter the month : ";
	cin>>month;
	cout<<"Enter the day : ";
	cin>>day;
}

void Date::writeDate(){
	string mnth[] = {"january", "febuary", "march", "april", "may", "june", "july", "august", "september", "october", "november", "december"};
	cout << mnth[month-1] << " "<<day <<endl;;
}

bool valDate(){
	// implement the logic here using an if checker for the months
	// if ()
	int noDay[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (month < 1 || month > 12){
		if (day <= noDay[month-1]){
			return true;
		};
	}
	
}
void Date::howManyDays(){
	int noDay[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int sum = 0;
	if(i=0; i < month; i++){
		sum =+ noDay[i];
	}
	cout<< sum + day;
}