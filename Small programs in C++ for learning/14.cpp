#include<iostream>
using namespace std;
main()
{
	int a[7];
	int b[7];
	int i,j,f=1;
	cout<<"Enter elements:\n";
	 for(i=0;i<7;i++)
	 cin>>a[i];
	 
	 
	 
	 for(i=0;i<7;i++)   
	{
			f=1;
		for(j=a[i];j>=1;j--)
	    {  
		f=f*j;
		
		}
		b[i]=f;}
		for(i=0;i<7;i++)
		cout<<b[i]<<"\n";
	       
}
