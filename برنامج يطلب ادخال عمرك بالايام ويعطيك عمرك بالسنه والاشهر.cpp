#include<iostream>
using namespace std;
main()
{int days,yaers,monuths,temp;
cout<<"days";
cin>>days;
yaers=days/360;
temp=days%360;
monuths=temp/30;
days=temp%30;
cout<<"days"<<days<<endl;
cout<<"monuths"<<monuths<<endl;
cout<<"yaers"<<yaers<<endl;

}
