#include<iostream>
using namespace std;
main()
{
	int a[10]={3,5,-2,22,63,-9,0,135,-4,21},b[5],c[5];
	
			for(int i=0;i<5;i++)
	      {
		   b[i]=a[i];
	       cout<<"b["<<i<<"]="<<b[i]<<"\n";} 
	      
		   cout<<"\n\n";
		   
		   	for(int i=5;i<10;i++)
	   {    c[i]=a[i];
	
	cout<<"c["<<i<<"]="<<c[i-5]<<"\n";}
		
	   
	   
		}
