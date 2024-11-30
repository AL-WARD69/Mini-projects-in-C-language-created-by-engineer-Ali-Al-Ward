#include<iostream>
using namespace std;
main()
{
	int a[10]={99,22,33,44,55,66,55,77,77,67};int temp;
	for(int j=0;j<10;j++)
	for(int i=0;i<10;i++)
if (a[j]<a[i])
{
	temp=a[j];
	a[j]=a[i];
	a[i]=temp;
}
cout<<"the array after order\n";
	for(int j=0;j<10;j++)
cout<<a[j]<<"  ";
}
