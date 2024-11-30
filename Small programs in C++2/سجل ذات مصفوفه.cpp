#include<iostream>
using namespace std;
struct ali
{
	int in;
	string s;
	int ma;
};
main()
{
	ali w[20];
	for(int i=0;i<2;i++)
	{
	
	cin>>w[i].in;
	cin>>w[i].s;
	cin>>w[i].ma;
	}
		for(int i=0;i<2;i++)
		{
		
	cout<<w[i].in<<"\n===========\n";
		cout<<w[i].s<<"\n===========\n";
			cout<<w[i].ma<<"\n===========\n";
			}
}
