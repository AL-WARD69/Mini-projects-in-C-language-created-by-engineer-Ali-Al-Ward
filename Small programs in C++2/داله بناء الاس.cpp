#include<iostream>
using namespace std;
int ali(int p,int u)
{int s=1;
	for (int i=1;i<=u;i++)
	
	s=s*p;
	return s;
	
}
main()
{
	int c,v,b;
	cin>>c;
	cin>>v;
	b=ali (c,v);
	cout<<b;
}
