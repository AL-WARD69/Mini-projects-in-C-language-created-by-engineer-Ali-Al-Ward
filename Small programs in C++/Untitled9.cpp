#include<iostream>
using namespace std;
main()
{
	
	for(;1;)
{
	int x,a=0,c=0;
	cout<<"x=";
	cin>>x;
for(x=1;x<=1000;x++)
{   a=0;
	for(int s=x;s>=1;s--)
	{
		if(x%s==0)a++;
	}
	if(a==2)
	{
	c++;
	cout<<x<<"  ";
}
}
cout<<"\n cout="<<c<<endl;
}
}
