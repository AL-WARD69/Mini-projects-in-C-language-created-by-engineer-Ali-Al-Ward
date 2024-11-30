#include<iostream>
using namespace std;
main()
{   int n,c=0,sum=0;
for(;n>=0;)
{

cout<<"enter number:";
cin>>n;
if(n>=0)
{
sum=sum+n;
c++;
}
}
cout<<"c="<<c<<endl;
cout<<"sum="<<sum<<endl;
}
