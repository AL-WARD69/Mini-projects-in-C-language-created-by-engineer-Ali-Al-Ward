#include<iostream>

using namespace std;
main()
{
	int a,b,f=1;
	cout<<"Enter base:";
	cin>>a;
	cout<<"Enter power:";
	cin>>b;
	for(int x=b;x>=1;x--)
	    f=f*a;
	    cout<<f;
	    
	}
