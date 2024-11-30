#include<iostream>
using namespace std;
main()
{
	
	for(;1;)
	{
	int x,a=0;
	cout<<"x=";
	cin>>x;
	for(int s=x;s>=1;s--)
	{
		if(x%s==0)a++;
	}
	if(a==2)
	cout<<"prime number\n";
	else
	cout<<"not prime number\n";
}
}
