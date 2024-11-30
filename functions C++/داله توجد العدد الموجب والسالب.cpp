#include<iostream>
using namespace std;
int po_ng(int x)
{if(x>0)
return"positive number\n ";
else
 return"negative number\n";
	
}
main()
{
	int a;
	for(;;){
	
		cout<<"enrte the numbers :";
	cin>>a;
	cout<<po_ng(a);}
}
