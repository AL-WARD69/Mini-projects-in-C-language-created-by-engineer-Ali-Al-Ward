#include<iostream>
using namespace std;
void priem(int x)
{int z=0;
  for(int i=x;i>=1;i--)
  if(x%i==0)
  z++;
   
   
   
   if(z==2)
cout<<"priem number\n ";
else
 cout<<" non priem number\n";
	
}
main()
{
	int a;
	for(;;){
	
		cout<<"enrte the numbers :";
	cin>>a;
	priem(a);}
}
