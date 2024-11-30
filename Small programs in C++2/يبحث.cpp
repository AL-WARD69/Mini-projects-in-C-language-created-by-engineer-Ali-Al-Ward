#include<iostream>;
using namespace std;
main()
{
	int a[10]{1,2,3,4,5,6,7,8,9,10};
	int b,c=0;
	cin>>b;
	for(int i=0;i<10;i++)
	if(b==a[i])
	{
		c++;
	}
	if(c>0)
	cout<<b;
	else
	cout<<"no";
	}


