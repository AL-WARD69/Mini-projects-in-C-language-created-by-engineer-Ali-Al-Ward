#include<iostream>
using namespace std;
main()
{
	while(1)
	{
	
  int n,f=1;
  cout<<"enter number:";
  cin>>n;
  for(int i=n;i>1;i--) 
  {
  	f=f*i;
	  }	
	  cout<<"fact of n="<<f<<endl;}
}
