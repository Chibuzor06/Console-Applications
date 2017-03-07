#include <iostream>
#include <string.h>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#define FILE_IN "phonebook.txt"


#include "header.h"

using namespace std;

int main(){
        phoneList mylist[5]; // we have five entries in our phone book
        // first must set up streams for input
        ifstream input;
        // open for input and don't create if it is not there
        input.open("phonebook.txt");
        // input.open(FILE_IN, ios::in|ios::_Nocreate);
        //Check to ensure the file was opened
        if(!input)
        {
        cout << "\n Can't find input file " << FILE_IN;
        cout << "\n Exiting program, bye bye \n ";
        exit(1);
        }
        int i, a, ex, num;
        char buf[35];
        for(i = 0; i < 5; ++i) // this loop reading each entry in phone book file
        {
        input.getline(buf, 25);
        mylist[i].setName(buf);
        input.getline(buf, 30);
        mylist[i].setAddress(buf);
        input.getline(buf, 5);
        a = atoi(buf);
        input.getline(buf, 5);
        a = atoi(buf);
        input.getline(buf,5);
        ex = atoi(buf);
        input.getline(buf, 7);
        num = atoi(buf);
        mylist[i].setPhoneNo(a, ex, num);
        }
        cout.setf(ios::left);
        cout << "\n Your Address Book contains these listings: \n\n";
        for(i = 0; i < 5; ++i)
        {
        mylist[i].printListing();
        }
        input.close();
        cout << "\n\n And a gracious Goodbye! \n";
return 0;
}
