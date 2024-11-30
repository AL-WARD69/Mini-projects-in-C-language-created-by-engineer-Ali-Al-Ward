#include<iostream>
using namespace std;
void ali(int a,int k=2)
{int c=a*k;
cout<<c;
}
main()
{
	int n,m;
	cin>>n;
	cin>>m;
	ali(n);
	cout<<"\n";
	ali(n,m);
	
}
