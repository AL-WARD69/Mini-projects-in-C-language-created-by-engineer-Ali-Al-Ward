#include<iostream>
using namespace std;
main()
{
	int a,b,c,d,e;
	cin>>a;
    {
	
    b=a%10;
    a=a-b;
    a=a/10;
    c=a%10;
    a=a-c;
    a=a/10;
    d=a%10;
    a=a-d;
    a=a/10;
    e=a%10;
    a=a-e;
    a=a/10;}
    
    
    cout<<a<<" "<<e<<" "<<d<<" "<<c<<" "<<b;
}
