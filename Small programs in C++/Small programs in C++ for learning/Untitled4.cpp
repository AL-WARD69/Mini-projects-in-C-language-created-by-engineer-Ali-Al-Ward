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
 for(sqr=1;sqr*sqr*sqr<x;sqr+=0.000001);
 
 cout<<"cube root="<<sqr<<endl;
 cout<<"cube root="<<cbrt(x)<<endl;	
//} 
}
