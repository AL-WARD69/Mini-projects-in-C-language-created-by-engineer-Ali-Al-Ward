#include<iostream>
using namespace std;
main()
{
	int a[10];
	int y=0,n;
	cout<<"Enter elements:\n";
	for(int i=0;i<10;i++)
	cin>>a[i];
	cout<<"search:";
	cin>>n;
	
for(int i=0;i<10;i++)
	{
	
	if(n==a[i])
	y=y+1;}
	if(y==0)
	cout<<"not found";
	if(y>0)
	cout<<"found";
}
