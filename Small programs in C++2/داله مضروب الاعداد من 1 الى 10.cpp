#include<iostream>
using namespace std;
int ali(int f)

{
	int c=1;
	for(int i=f;i>=1;i--)
	c=c*i;
	return c;
}
main()
{

for(int i=1;i<=10;i++)
{
	int sum=0;
	
	sum=sum+ali(i);
	cout<<"\n"<<sum<<"\n";
	
}
}
