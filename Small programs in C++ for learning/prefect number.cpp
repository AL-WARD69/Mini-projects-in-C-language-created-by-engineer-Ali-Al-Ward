#include<iostream>
using namespace std;
main()
{
	int a,p,b,c=0;
	while(1)
	{
	  c=0;
	cout<<"Enter number";
	cin>>b;
	for(a=b;a>=1;a--)
	{ 
	
	if(b%a==0)
	  {
	    c=c+a;
     	p=c-b;
     	}}
	
	if(p==b)
    	{
        	cout<<"prefect number\n";
	    }
	else
    	{
        	cout<<"not prefect number\n";
		}
}}
