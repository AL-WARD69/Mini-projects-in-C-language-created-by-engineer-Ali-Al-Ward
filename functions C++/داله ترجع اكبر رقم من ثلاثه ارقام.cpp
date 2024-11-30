#include<iostream>
using namespace std;
int biger(int x,int y,int z)
{ if(x>y&&x>z)
  return x;
  {if(y>x&&y>z)
  return y;
else
return z;}	
}
main()
{
	int a ,b,c;
	cout<<"enrte the numbers :";
	cin>>a;
		cout<<"enrte the numbers :";
	cin>>b;
		cout<<"enrte the numbers :";
	cin>>c;
	
	cout<<biger(a,b,c);
	
	
	}
