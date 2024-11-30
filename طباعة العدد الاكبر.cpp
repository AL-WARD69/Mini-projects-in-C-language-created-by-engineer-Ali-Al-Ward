#include<iostream>
#include<cmath>
using namespace std;
main()
{for(;1;)


{

int x,y,e,m,max;
cout<<"wriet x =";
cin>>x;
cout<<"wriet y =";
cin>>y;
cout<<"wriet e =";
cin>>e;
cout<<"wriet m =";
cin>>m;
if(x>=y && x>=e &&x>=m)max=x;
if(y>x && y>e && y>m)max=y;
if(e>x && e>y && e>m)max=e;
if(m>x && m>y && m>e)max=m;
cout<<"______________________________\n";
cout<<"larg="<<max<<"\n_________"<<endl;

}
}
