#include<iostream>
using namespace std;
struct s
{
	int k;
	int j;
	
};
struct ali
{
	int i;
	int u;
	s d;
	
};
main()
{
	ali r;
	r.i=939;
	r.u=984;
	r.d.k=8484;
	r.d.j=7687;
cout<<r.i;
	cout<<r.u;
	cout<<r.d.k;
	cout<<r.d.j;
	
}
