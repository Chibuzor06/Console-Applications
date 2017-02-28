#include <iostream>
#include <string.h>
#include <iomanip>
#include <fstream>
#include <cstdlib>

#include "header.h"

using namespace std;

phoneList::phoneList(){
    cout<<"hello"<<endl;

};

void phoneList::setName(char n[]){
    strcpy(name, n);
};

void phoneList::setAddress(char add[]){
    strcpy(address,add);
};

void phoneList::setPhoneNo(int a,int ex,int phone){
    int areacode = a;
    int exchange = ex;
    int phonenumber = phone;
};
void phoneList::printListing(){

};

phoneList::~phoneList(){

};