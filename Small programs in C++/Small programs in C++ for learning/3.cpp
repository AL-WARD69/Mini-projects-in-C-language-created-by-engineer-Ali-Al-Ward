#include<iostream>
#include<cmath>
using namespace std;
main()
{
	//while(1)
//	{
 float x,sqr,cbr;
 cout<<"x=";
 cin>>x;
 for(sqr=1;sqr*sqr<x;sqr+=0.000001);
 
 cout<<"square root="<<sqr<<endl;
 cout<<"square root="<<sqrt(x)<<endl;	
//}
}
