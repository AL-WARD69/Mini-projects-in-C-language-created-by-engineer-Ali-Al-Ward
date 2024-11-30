#include<iostream>
using namespace std;
main()
{
	 int n,max,min,x;
	cin>>n;
	int a[n];
	for(int x=0;x<n;x++)
	cin>>a[x];
	max=a[0];
	min=a[0];
	for(int x=0;x<n;x++)
	{
	
	if(max<a[x])max=a[x];
	if(min>a[x])min=a[x];}
	
	cout<<"max="<<max<<endl;
	cout<<"min="<<min<<endl;
}
