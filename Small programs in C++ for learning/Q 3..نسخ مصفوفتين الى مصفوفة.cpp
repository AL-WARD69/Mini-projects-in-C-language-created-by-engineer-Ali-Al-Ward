#include<iostream>
using namespace std;
main()
{
	int a[5]={3,5,-2,22,63},b[5]={-9,0,15,-4,21},c[10];
	
			for(int i=0;i<5;i++)
	      {
		   c[i]=a[i];
	       cout<<"c["<<i<<"]="<<c[i]<<"\n";} 
		   
		   	for(int i=5;i<10;i++)
	   {    c[i]=b[i-5];
	
	cout<<"c["<<i<<"]="<<c[i]<<"\n";}
		
	   
	   
		}
