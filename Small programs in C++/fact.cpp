#include<iostream>
using namespace std;
main()
{
	while(1)
	{
	
	int m=1,x;
	cout<<"x=";
	cin>>x;
	for(int i=x;i>=1;i--)
	{
		m=m*i;
	}
	cout<<"factorial of x="<<m<<endl;
}
}