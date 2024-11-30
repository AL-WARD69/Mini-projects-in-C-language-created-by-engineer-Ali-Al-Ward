#include<iostream>
#include<cstring>
using namespace std;
main()
{char st1[10];
 string st2;
 cout<<"enter the string {1}";
  cin.getline(st1,10);
  cout<<"enter the string {2}";
  getline(cin,st2);
  
 st2.assign(st1);
 cout<<"\n\n\t"<<st1;
 cout<<"\n\n\t"<<st2;
	
	
	
}
