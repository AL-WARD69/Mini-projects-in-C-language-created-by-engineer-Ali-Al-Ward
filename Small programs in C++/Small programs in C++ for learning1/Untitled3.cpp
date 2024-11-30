#include<iostream>
using namespace std;
main()
{
	
  int n,f=1;
  ahmed:
  cout<<"enter number:";
  cin>>n;
  int i=n;
  do
  {
  	f=f*i;
	  i--;}	while(i>1); 
	  cout<<"fact of n="<<f<<endl;
	  goto ahmed;
}
