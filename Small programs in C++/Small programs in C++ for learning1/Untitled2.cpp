#include<iostream>
using namespace std;
main()
{
	do
	{
	
  int n,f=1;
  cout<<"enter number:";
  cin>>n;
  int i=n;
  while(i>1) 
  {
  	f=f*i;
	  i--;}	
	  cout<<"fact of n="<<f<<endl;}while(1);
}
