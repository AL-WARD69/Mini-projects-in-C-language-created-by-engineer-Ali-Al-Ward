#include<iostream>
#include<cmath>
using namespace std;
main()
{
	while(1)
	{
	
	float n,x,sqr,cbr;
	cout<<"enter number:";
	cin>>n;
	for(x=1;x*x<n;x+=0.00001);
cout<<"square root="<<x<<endl;
cout<<"square root="<<sqrt(n)<<endl;
for(x=1;x*x*x<n;x+=0.000001);
cout<<"cube root="<<x<<endl;
cout<<"cube root="<<cbrt(n)<<endl;
	//cbr=pow(n,0.333333);
	
	//cout<<"square root="<<cbr <<endl;
}}
