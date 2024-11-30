#include<iostream>
using namespace std;
main()
{
	string name="osama";
	
	int n=0,m=0;
	char z;
	cin>>z;
	cout<<"\n___________________________________________\n";
while(name[n]!='\0')
{if(name[n]==z)
{m++;
break;}
else
n++;
}
if(m>0)
cout<<"thes character found   it is in number "<<n<<"  from wolrd   ";
else
cout<<"thes character not found ";
}
