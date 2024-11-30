#include<iostream>
using namespace std;
main()
{
	int a[3]{1,2,3};
	int b[3]{4,5,6};
	int c[3];
	int sum=0;
	for (int i=0;i<3;i++)
	sum=sum+a[i];
	for (int j=0;j<3;j++)
	sum=sum+b[j];
	{
	
	c[3]=a[i]+b[j];
	cout<<c[3];
	}
}
