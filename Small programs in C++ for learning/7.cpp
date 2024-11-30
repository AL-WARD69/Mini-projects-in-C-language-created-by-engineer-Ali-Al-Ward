#include<iostream>
using namespace std;
main()
{
	int n;
	cout<<"Enter number of the array content";
	cin>>n;
	int a[n];
	cout<<"Enter elements:";
	for(int i=0;i<n;i++)
	cin>>a[i];
	int sum=0;
	for(int i=0;i<n;i++)
	{
	
	sum+=a[i];
	cout<<a[i]<<" ";}
	cout<<"\nsum="<<sum<<endl;
}
