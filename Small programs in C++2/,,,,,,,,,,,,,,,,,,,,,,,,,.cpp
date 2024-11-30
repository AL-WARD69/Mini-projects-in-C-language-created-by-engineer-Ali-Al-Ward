#include<iostream>
using namespace std;
int sum (int a ,int b)
{int i;
	for(i=1;i<=a*b;i++)
	if(i%a==0&&i%b==0)
	break;
    return i;
}


main()
{
int x,d;
cin>>x;
cin>>d;
cout<<sum (x,d);
}
