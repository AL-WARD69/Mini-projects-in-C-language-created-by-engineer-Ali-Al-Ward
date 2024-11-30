#include<iostream>
using namespace std;
main()
{
	int n1,n2,a,i,p,c=0;
	cout<<"Enter n1:";
	cin>>n1;
	cout<<"Enter n2:";
	cin>>n2;
	if(n1>n2)
	{
		int temp;
		temp=n1;
		n1=n2;
		n2=temp;
	}
	
	for(a=n1;a<=n2;a++)
	{
	   c=0;
	for(i=a;i>=1;i--)
	{ 
	
	    if(a%i==0)
	    {
	     c=c+i;
       	p=c-a;
     	}
	}
	if(p==a)
	{
    	cout<<a<<endl;
	}

}}
