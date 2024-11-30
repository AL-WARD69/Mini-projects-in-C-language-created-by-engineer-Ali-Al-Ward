#include<iostream>
using namespace std;
main()
{
	int a[8]={1,2,3,4,5,6,7,8};
	int m=a[0];
	int n=a[0];
	for (int i=0;i<8;i++)
	{
		cout<<a[i]<<"\n";
	}
	for (int i=0;i<8;i++)
	{
	if(a[0]<a[i])
	m=a[i];
	if(a[0]>a[i])
	n=a[i];	
	}
	cout<<m<<"\t";
	cout<<n;
}
