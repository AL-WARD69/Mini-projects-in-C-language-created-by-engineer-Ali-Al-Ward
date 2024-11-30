#include<iostream>
using namespace std;
main()
{
	char s;
	int x,j,sum=0,f=1;
	 
	cout<<"Enter symbol:";
	cin>>s;
	switch(s)
	{
		case '+':for(int x=1;x<=10;x++)
		          {
		          	sum+=x;
				  }
				  cout<<sum<<endl;
		break;
		case '*':for(x=1;x<=7;x++)
                  {
	                   f=1;
                        for(j=x;j>=1;j--)
                            f=f*j;
                            cout<<"factorial of "<<x<<"="<<f<<endl;}
		
		break;
		default:cout<<"wrong symbol";
	}
}
