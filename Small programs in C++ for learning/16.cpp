#include<iostream>
using namespace std;
main()
{
	int a[5]={1,2,4,4,5};
	int x;
	int y=0;
	cin>>x;
	for(int i=0;i<5;i++)
	{
	
	if(x==a[i])
	y=y+1;}
	if(y==0)
	cout<<"not found";
	if(y>0)
	cout<<"found";
	if(y>1)
	cout<<" and repeated";
	
	
	
}
