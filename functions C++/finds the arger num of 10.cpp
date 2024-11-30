#include<iostream>
using namespace std;
int larger(int x,int y)
{
	if(x>y)
	return x;
	else
		return y;
	}
main()
{
	int a,b,i;
	cin>>b;
	a=b;
	  for(i=1;i<10;i++)
	  {
	  	cin>>b;
    a=larger(a,b); 
	 }
cout<<"\nthe larger number is .\n"<<a;

}
