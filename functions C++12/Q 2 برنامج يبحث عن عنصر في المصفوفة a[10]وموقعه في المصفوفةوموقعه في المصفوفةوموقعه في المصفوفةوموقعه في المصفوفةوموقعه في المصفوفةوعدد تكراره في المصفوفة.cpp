#include<iostream>
using namespace std;
main()
{
	int w[10]={2,3,45,-9,8,56,7,6,54,3};
	int x,z=0, a;
	cout<<"\n\t _______________________________\n";
	cout<<"\t|   enter the number            |\n";
	cout<<"\t\t=";cin>>x;
	cout<<"\t|_______________________________|\n";
	
		cout<<"\n__________________________________________________\n";
	

	
	for(int i=0;i<10;i++)
	{if (w[i]==x){a=i;
	z++;
	}}
	
	if(z>0)
	 {
	 cout<<"the number is found ";
	cout<<"\n__________________________________________________\n";
	cout<<"and the number pace is["<<a<<"]";
    cout<<"\n__________________________________________________\n";
	cout<<"and the number repeation is ["<<z<<"]";
	cout<<"\n__________________________________________________\n";
	}else
	 cout<<"the number is  not found ";

}
