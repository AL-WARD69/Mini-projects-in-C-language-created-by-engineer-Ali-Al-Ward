#include<iostream>
using namespace std;
main()
{
 float x,sqr,cbr;
 cout<<"x=";
 cin>>x;
 for(sqr=1;sqr<=x;sqr+=0.000001)
 {
 	if(sqr*sqr==x)
 	break;
 }
 cout<<"square root="<<sqr<<endl;
 //cout<<"cube root="<<cbr<<endl;	
}
