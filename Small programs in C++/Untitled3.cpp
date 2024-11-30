#include<iostream>
using namespace std;
main()
{
	
	
	int m=1,x;
	cout<<"x=";
	cin>>x;
	int i=x;
	while(i>=1)
	{
		m=m*i;
		i--;
	}
	cout<<"factorial of x="<<m<<endl;

}
