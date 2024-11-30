#include<iostream>
using namespace std;
main()
{
	int num;
	int b;
	cin>>num;
	while(num>0)
	{
		b=num%10;
		cout<<b<<" ";
		num=num/10;
	}
	
}
