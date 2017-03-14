#ifndef DATE_H
#define DATE_H

class Date{
    private:
    int day, month, year;
    void howManyDays();

    public:;
    Date();
    Date(int m,int d);
    void setDate(int m,int d);
    void getDate();
    void writeDate();
    bool valDate();
    //void howManyDays();
};

#endif