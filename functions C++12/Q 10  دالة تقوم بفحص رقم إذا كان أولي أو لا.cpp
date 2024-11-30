#include<iostream>
using namespace std;
void prim(int a)
{int z=0;
for(int i=a;i>0;i--)
{if(a%i==0)z++;
}
if(z==2)

 cout<<"  prime number  ";
 else
 cout<<"  non prime number  ";	
}
main()
{   
		int x;
		for(;;){
		cout<<"\n___________________________________________________________________\n";	
	cout<<"\n\t*********************************\n";
	cout<<"\t enter the  number  ";
	cin>>x;

;
    prim(x);}


}

