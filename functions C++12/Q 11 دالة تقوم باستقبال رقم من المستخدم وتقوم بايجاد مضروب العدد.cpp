#include<iostream>
using namespace std;
void mthroob(int a)
{int z=1;
for(int i=a;i>0;i--)
z=z*i;
cout<<"mathroob the numer ="<<z;
z=0;}

main()
{   
		int x;
		for(;;){
		cout<<"\n___________________________________________________________________\n";	
	cout<<"\n\t*********************************\n";
	cout<<"\t enter the  number  ";
	cin>>x;

    mthroob(x);}


}

