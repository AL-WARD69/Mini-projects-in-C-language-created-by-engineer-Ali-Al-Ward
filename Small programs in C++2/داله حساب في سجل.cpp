#include<iostream>
using namespace std;
struct ali
{
	string n;
	int m;
	int g;
	int u;
};
int alii (ali w)
{
	int r;
	r=(w.m+w.g+w.u)/3;
	return r;
}
main(){
	ali s1;
	cin>>s1.n;
	cin>>s1.m;
	cin>>s1.g;
	cin>>s1.u;
	cout<<s1.n<<"\n";
	cout<<s1.m<<"\n";
	cout<<s1.g<<"\n";
    cout<<s1.u<<"\n";
cout<<alii(s1);
}
