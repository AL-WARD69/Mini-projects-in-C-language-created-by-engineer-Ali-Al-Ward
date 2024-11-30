#include<iostream>
using namespace std;
int a(int a)

{int t=0;
	for (int i=a;i>=1;i--)
	t=t*i;
	return t;
}
main()
{
	for (int i=1;i<=20;i++)
	{
		if(i%2!=0)
		{
			int sum=0;
			sum=sum+a(i);
			cout<<i<<"="<<sum<<endl;
		}
	}
}
