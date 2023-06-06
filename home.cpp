#include<iostream>
#include<string.h>
using namespace std;

class home{
	
	public :
		
		int h_no, room, r_size,h_prize;
		char h_name[100],h_add[100];
};

int main()
{
	home h;
	
	h.h_no = 1;
	strcpy(h.h_name,"PRIYANSHI");
	strcpy(h.h_add,"MOTA VARACHAA");
	h.room = 3;
	h.r_size = 64;
	h.h_prize = 8000000;
	
	cout<<"HOUSE NUMBER : "<<h.h_no <<endl<<"HOUSE NAME : "<<h.h_name <<endl<<"HOUSE ADDRESS : "<<h.h_add <<endl
	     <<"NUMBER OF ROOM : "<<h.room <<endl<<"SIZE OF ROOM : "<<h.r_size <<endl<<"HOUSE PRIZE : "<<h.h_prize <<endl;
	     
	 return 0;    
	
}
