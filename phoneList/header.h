#include <iostream>

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