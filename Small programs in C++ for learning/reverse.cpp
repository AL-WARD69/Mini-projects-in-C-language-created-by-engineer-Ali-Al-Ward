#include<iostream>
using namespace std;
main()
{
	int a[5];
	int sum=0;
	int i;
	cout<<"Enter elements\n:";
	for( i=0;i<5;i++)
	
{

	cin>>a[i];
	sum=sum+a[i];}
	cout<<"sum="<<sum;
	
	for(int i=4;i>=0;i--)
	cout<<"\n"<<a[i]<<endl;
	
	
}
