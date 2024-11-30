#include<iostream>
using namespace std;
main()
{
int a[5]{3,4,5,6,7};
int b[5]{224,25,27,87,88};
int c[10];
for(int i=0;i<5;i++)
{
	c[i]=a[i];
	c[i+5]=b[i];
	cout<<c[i]<<"\t";
}}
