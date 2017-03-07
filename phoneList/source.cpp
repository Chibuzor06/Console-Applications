#include <iostream>
#include <string.h>
#include <iomanip>
#include <fstream>
#include <cstdlib>

#include "header.h"

using namespace std;

phoneList::phoneList(){
    // name[0] = '\0';
    // address[0] = '\0';
    areacode = exchange = phonenumber = 0 ;

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
    cout << endl << setw(25) << name << setw(30) << address << " ";
    cout << areacode << " - " << exchange << " - " << phonenumber;
};

phoneList::~phoneList(){

};