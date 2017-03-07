#ifndef HEADER_H
#define HEADER_H
#include <iostream>
#include <string.h>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#define FILE_IN "phonebook.txt"



class phoneList{

    private:
    char name[25], address[75];
    int areacode, exchange, phonenumber;

    public:
    phoneList();
    void setName(char n[]);
    void setAddress(char add[]);
    void setPhoneNo(int a,int ex,int phone);
    void printListing();
    ~phoneList();
};

#endif