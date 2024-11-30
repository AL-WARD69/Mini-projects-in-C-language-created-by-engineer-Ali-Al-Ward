#include<iostream>
using namespace std;
main()
{
	
	while(1)
	{
	int m=1,x;
	cout<<"x=";
	cin>>x;
	int i=x;
	ibraheem:
	{
		m=m*i;
		i--;
	}if(i>=1) 
	{
		goto ibraheem;
	}
	cout<<"factorial of x="<<m<<endl;
}
}
