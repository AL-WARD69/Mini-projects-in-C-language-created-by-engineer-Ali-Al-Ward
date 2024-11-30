#include<iostream>
using namespace std;
main()
{
	int a[10];
	int i,j,n=0;
	cout<<"Enter elements:\n";
	for(int i=0;i<10;i++)
	cin>>a[i];
	
	for(int i=0;i<10;i++)
	{
	
	n=0;
        for(int j=a[i];j>=1;j--)
        
		
            if(a[i]%j==0)n++;
            {
			
            if(n==2)
            cout<<a[i]<<" ";}}
	
	 
	
}
