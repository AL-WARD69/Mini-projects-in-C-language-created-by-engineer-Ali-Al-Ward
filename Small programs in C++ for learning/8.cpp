#include<iostream>
using namespace std;
main()
{
	int a[5];
	int b[5];
	int c[5];
	int i,j,d;
	cout<<"Enter elements of a:\n";
	for(i=0;i<5;i++)
	cin>>a[i];
	cout<<"Enter elements of b:\n";
	for(j=0;j<5;j++)
	cin>>b[j];
	
	for(j=0;j<5;j++)
	c[j]=a[j]+b[j];
	
cout<<"Elements of array c=\n";
	for(j=0;j<5;j++)
	cout<<c[j]<<" ";
}
