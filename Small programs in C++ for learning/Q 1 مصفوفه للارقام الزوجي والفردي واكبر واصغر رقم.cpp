#include<iostream>
using namespace std;
main()
{
	float a[10],sum=0,max=a[0],min=a[0];
	
	for(int i=0;i<10;i++)
	{cout<<"a["<<i<<"]=";
	cin>>a[i];}
	cout<<"\n\n";
		for(int i=0;i<10;i++)
	cout<<"a["<<i<<"]="<<a[i]<<endl;
	
	cout<<"\n\tthe sum of array is:\n";
	
		
		for(int i=0;i<10;i++)
       sum=sum+a[i];
       cout<<"sum="<<sum;
       
       	cout<<"\n\tthe positive umbers or negative umbers of array is:\n";
		for(int i=0;i<10;i++)
       if(a[i]>0)
       cout<<"positive number\n ";
       else
       cout<<"negative number\n";
       
       cout<<"\n\tthe biger number or smaller umbers of array is:\n";
	
       	for(int i=1;i<10;i++)
          {
		  if(a[0]<a[i])
          max=a[i];
           if(a[0]>a[i])
          min=a[i];
		}
          
          cout<<"max="<<max<<endl;
             cout<<"min="<<min<<endl;
}
