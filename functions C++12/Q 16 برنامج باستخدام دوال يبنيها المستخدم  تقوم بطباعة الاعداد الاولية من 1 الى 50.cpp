#include<iostream>
using namespace std;
void prime(int x,int w)
{int i,y;
for(i=x;i<=w;i++)
{int z=0;
for(y=i;y>=1;y--)
{
if(i%y==0)z++;}
if(z==2)cout<<i<<"  ";}

	
}
main()
{
	int a,b;
	cout<<"\t\t_________________________\n";
	cout<<"\tenter the fris number :";
	cin>>a;
		cout<<"\t\t_________________________\n";
	cout<<"\tenter the last number :";
	cin>>b;
	
	prime(a,b);
}
