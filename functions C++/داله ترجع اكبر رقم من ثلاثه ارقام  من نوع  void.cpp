#include<iostream>
using namespace std;
void biger(int x,int y,int z)
{ if(x>y&&x>z)
  cout<< x;
  {if(y>x&&y>z)
  cout<< y;
else
cout<< z;}	
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
	
	biger(a,b,c);
	
	
	}
