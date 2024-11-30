#include <iostream>
using namespace std;
main()
{
	int a[5]={3,5,50,7,6},max=a[0];
	
	for(int i=0;i<5;i++)
	{
		if(max<a[i+1])
		max=a[i+1];
	}
	
	cout<<"max="<<max<<endl;
	
	
    
	

	
 }
