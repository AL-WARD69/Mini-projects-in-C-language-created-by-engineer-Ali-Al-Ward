#include<iostream>
using namespace std;
int mathroob(int x)
{int z=1;
  for(int i=x;i>=1;i--)
  z=z*i;
  return z;
	
}
main()
{
	int a;
	for(;;){
	
		cout<<"enrte the numbers :";
	cin>>a;
	cout<<mathroob(a);}
}
