#include<iostream>
using namespace std;
main()
{
	for(;;)
	{

  int n,f=1;
  cout<<"enter number:";
  cin>>n;
  int i=n;
  asd:
  {
  	f=f*i;
	  i--;}	if(i>1)goto asd; 
	  cout<<"fact of n="<<f<<endl;
}	}
