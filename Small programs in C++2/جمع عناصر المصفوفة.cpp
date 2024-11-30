#include<iostream>
using namespace std;
main()
{
int a[4]{3,4,3,5};
int sum=0;
for(int i=0;i<4;i++)
cout<<a[i]<<"\n";
for(int i=0;i<4;i++)
{

sum=sum+a[i];

}
cout<<sum;
}
