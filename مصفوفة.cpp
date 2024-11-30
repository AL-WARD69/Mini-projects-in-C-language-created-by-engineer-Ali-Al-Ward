#include<iostream>
using namespace std;
main()
{
int a[4]{3,4,3,5};
int n,c=0;
cin>>n;
for( int i=0;i<4;i++)
	if(n==a[i])
{
c++;	
	
}
	
	if(c>0)
	cout<<n;
	else
	cout<<"s";
}


