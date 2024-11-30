#include<iostream>
using namespace std;
main()
{
	int a[4][4]{1,2,3,4,
	            5,6,7,8,
				9,10,11,12
				,13,14,15,16};
	int i,j;
	int sum =0;
	for(i=0;i<4;i++)
	{
		sum=0;
		for(j=0;j<4;j++)
		{
			sum=sum+a[i][j];
		}
		cout<<sum<<"\t";
	}
}
