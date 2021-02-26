#include <iostream>
using namespace std;
int main()
{  	
    int point = 0;
	int pass = 0;
	int fail = 0;

	while(point != -999){
		cout<<"Enter Point (0-100) or -999 : ";
		cin>>point;

		 if(point>=0 && point<=100)
		{
			if(point>=50 && point<=100)pass++;
			else if(point>0 && point<50) fail++;	
			
		}
		 else if (point<0 && point>100)  {
			cout<<"Re-Enter Point (0-100) or -999 : ";
			cin>>point;
			if(point>=50 && point<=100)pass++;
			else if(point>=0 && point<50)fail++;
			
		}
		
	}
	
	cout<<"Pass : "<< pass << " student"<<endl ;
	cout<<"Fail : "<< fail << " student"<<endl ;
	return(0);
	}
