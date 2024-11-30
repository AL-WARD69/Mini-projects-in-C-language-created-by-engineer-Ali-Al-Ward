#include<iostream>
using namespace std;
void pos_nage(int a)
{if(a>0)
 cout<<"  positive number  ";
 else
 cout<<"  nagetive number  ";	
}
main()
{   
		int x;
		for(;;){
			cout<<"\n___________________________________________________________________\n";
	cout<<"\n\t*********************************\n";
	cout<<"\t enter the  number  ";
	cin>>x;

	cout<<"___________________________________________________________________\n";
    pos_nage(x);

}
}

