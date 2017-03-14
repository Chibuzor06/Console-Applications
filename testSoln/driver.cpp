#include <iostream>
#include "date.h"

using namespace std;

int main()
{
	Date q;
	bool valid;
	char ans;
	do{

	q.getDate();
	//q.valDate();
	valid = q.valDate();
	if(valid == false){
		cout<<"\n\nDate is invalid !!! It is reset to jan 01\n\n\n";
	}
	q.writeDate();
	
	//q.howManyDays();
	cout  << "Do you wish to continue :";
	cin >> ans;
	}while(ans == 'y');
	return 0;
}