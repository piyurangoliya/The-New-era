#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int seconds;
	cout<<"ENTER THE NUMBER OF SECOUNDS : "
	cin>>seconds;
	
	int hours = seconds / 3600;
	seconds %= 3600;
	
	int minutes = secinds / 60;
	seconds %= 60;
	
	cout<<endl<<hours<<" : "<<minutes<<" : "<<seconds;
	
	return 0;
}
