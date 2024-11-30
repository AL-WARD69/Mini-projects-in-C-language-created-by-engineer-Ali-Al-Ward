#include<iostream>
#include<cstring>
using namespace std;
main()
{string st1="osama";
 string st2="abdalmjeed ";
 string st3="naji";
 string st4="alansi";
 string st5;
 
st5.assign(st1);
 cout<<"\n\n\t"<<st5;
 
 
 cout<<"\n\n\n";
 
if( st1.compare(st4)==0)
 cout<<"yes";
 else
 cout<<"no";

 

 
  int pos=st3.find('a');
  cout<<"\n"<<pos;
  
  pos=st4.rfind('s');
  cout<<"\n"<<pos;
 
	
	
	
}
