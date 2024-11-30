#include<iostream>
#include<cmath>
using namespace std;
main()
{
int x;
cout<<"x=";
cin>>x;
if(x%4==0)
cout<<pow(x,2)<<"\t";
{
if(x%2==1)
cout<<pow(x,0.3)<<"\t";
else
cout<<x*10<<"\t";}
}
