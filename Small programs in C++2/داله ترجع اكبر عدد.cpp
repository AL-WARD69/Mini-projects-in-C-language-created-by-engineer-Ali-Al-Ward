#include<iostream>
using namespace std;
void ali(int a ,int b,int f)
{
if (a<b &&a<f)
cout<< a;
if (b<a&&b<f)
cout<<b;
else

cout<< f;
}


main()
{
int x,b,w;
cin>>x;
cin>>b;
cin>>w;
ali(x,b,w);
}
