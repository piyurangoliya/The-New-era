#include<iostream>
#include<string.h>
using namespace std;


class sum{
			
		int a,b,c;
};

int main()
{
	sum b;
	
	b.a = 10;
	b.b = 20;
	b.c = b.a + b.b;
	
	cout<<"Your sum of "<< b.a<<" + "<<b.b<<" :- "<<b.c;
	
	return 0;
	
}
