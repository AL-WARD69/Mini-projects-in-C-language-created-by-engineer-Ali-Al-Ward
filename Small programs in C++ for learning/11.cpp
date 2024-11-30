#include<iostream>
using namespace std;
main()
{
	int a[5]={1,-3,4,5,-8};
	int f=0;
	int b[f];
	int i,n=0;
	
	for(int i=0;i<5;i++)
	if(a[i]<0)
	{
	++f;
	b[f]=a[i];}
	else
	{cout<<a[i]<<endl;
}
for(int i=0;i<f;i++)
cout<<b[i]<<" ";
}
