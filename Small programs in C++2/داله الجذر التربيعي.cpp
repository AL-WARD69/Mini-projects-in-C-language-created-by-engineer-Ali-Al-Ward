#include<iostream>
using namespace std;
int ali(int s);
int fff(int s);
main()
{
	int k=3,u=5;
	char c='a';
	cout<<ali(k)<<"\n";
	cout<<fff(u);
}
int fff(int s)
{
	int r;
	r=ali(s)*s;
	return r;
}
int ali(int s)
{
	int r;
	r=s*s;
	return r;
}

