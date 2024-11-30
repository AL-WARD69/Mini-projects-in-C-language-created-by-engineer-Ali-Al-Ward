#include<iostream>
using namespace std;
main()
{   const int n=5;
	int a[n];
	int i,j,temp;
	
	 for(i=0;i<n;i++)
	 cin>>a[i];
	 
	 
	 
	 
	 for(i=0;i<n;i++)
	    for(j=0;j<n;j++)
	     if(a[j]>a[j+1])
	     { 
	     temp=a[j];
	     a[j]=a[j+1];
	     a[j+1]=temp;}
	     
	     for(i=0;i<n;i++)
	     cout<<a[i]<<"\n\n";
	 
}
