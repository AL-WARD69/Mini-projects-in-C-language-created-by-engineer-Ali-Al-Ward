#include<iostream>
#include<fstream>
#include<string>
using namespace std;
	ofstream markt;
string na;
		int l,a,b;
		
		float pr,d,dis,sum=0;
		 int h,v;
		
			int nn = 1,i;
		
		string senf[1000];
		int price[1000];
		int quntity[1000];
		void ahmed()
		{
			for( i=0; i< h ; i++)
			{
				cout<<" \n\n enter the alsnf name:"<<"\t"<<i+1<<"\n";
				cin>>senf[i];
			cout<<" enter the alsnf prise:"<<"\t"<<i+1<<"\n";
			cin>>price[i];
			cout<<"enter the countum of senf:"<<"\t"<<i+1<<"\n";
			cin>>quntity[i];
			
	         
			}
		}
		void display()
		{
			cout<<"==senf Number =====senf Name =======senf price=========senf quntity\n";
			for(int i=0;i < h ; i++)
			cout<<i+1 <<"\t\t"<<senf[i] <<"\t\t\t" << price[i]<<"\t\t\t"<<quntity[i]<<"\n";
			
			cout<<"====================end==========================\n";
		}
		void result()
		{
		
		
			  	
			  	cout<<"the sum :"<<sum<<"\n";
			  		markt<<"the sum is:"<<"\n"<<sum<<"\n";
			  
		}
		void discount()
		{
			 cout<<"enter the discount !!%"	;
		   		 	 markt<<"enter discount  !!%"<<"\n";
		   		 cin>>d;
		   		 markt<<"discount almdkhal :is:"<<"\n"<<d<<"\n";
		   		 
		   		 dis=sum/100*d;
		   		 cout<<"\n the discount is :"<<dis<<"\n";
		   		 cout<<"the total="<<sum-dis<<"\n";
		   		 markt<<"the total="<<sum-dis<<"\n";
		   		 
		}
		void option()
		{
			cout<<"enter number [1]for back to the acount  or enter number [2] for conntinued the last acount or enter number[3]for discount or enter number[4] for go out  ";	
				markt<<"enter number [1]for back to the acount  or enter number [2] for conntinued the last acount or enter number[3]for discount or enter number[4] for go out  "<<"\n";				
			
		}
void sale()
{
	
	
			
		 
			 
				//cout<<" \n\n enter the alsnf name\n";
				cout<<senf[nn-1] <<"\t\t\t" << price[nn-1] <<"\t\t\t" <<quntity[nn-1];
					markt<<senf[nn-1] <<"\t\t\t" << price[nn-1] <<"\t\t\t" <<quntity[nn-1];
				//cout<<" enter the alsnf prise:\n";
	           
}
main()
{

	markt.open("w.txt",ios::out);
	
	{
		
		
		cout<<" =======================================================================================\n";
		cout<<"== *           *    * * * *    *         * * * *    * * * *     * *     * *    * * * *  ==\n";
		cout<<"== *           *    *          *        *          *       *   *   *   *   *   *        ==\n";
		cout<<"== *     *     *    * * * *    *        *          *       *   *    * *    *   * * * *  ==\n";
		cout<<"== *    * *    *    *          *        *          * * * * *   *     *     *   *        ==\n";
		cout<<"== *   *   *   *    *          *        *          *       *   *           *   *        ==\n";
		cout<<"==  * *     * *     * * * *    * * * *   * * * *   *       *   *           *   * * * *  ==\n";
		cout<<" =======================================================================================\n";
		
				markt<<" =======================================================================================\n";
		markt<<"== *           *    * * * *    *         * * * *    * * * *     * *     * *    * * * *  ==\n";
		markt<<"== *           *    *          *        *          *       *   *   *   *   *   *        ==\n";
		markt<<"== *     *     *    * * * *    *        *          *       *   *    * *    *   * * * *  ==\n";
		markt<<"== *    * *    *    *          *        *          * * * * *   *     *     *   *        ==\n";
		markt<<"== *   *   *   *    *          *        *          *       *   *           *   *        ==\n";
		markt<<"==  * *     * *     * * * *    * * * *   * * * *   *       *   *           *   * * * *  ==\n";
		markt<<" =======================================================================================\n";
		
		point:
		cout<<"enter number [ 1 ] for acoun or enter number [2] for register senf  ** or enter number [3] to display all senf ** or  enter [0] for go out\n";
		
       		
		cin>>l;
		markt<<"tm akhtear is"<<"\n"<<l<<"\n";
		if(l==2)
		{
			cout<<"pless enter number alsnf:"<<"\n";
			
			 main:	
			sum=0;
			start:
				
			
				do
				{
					cin>>nn;
			 	
			 	if(nn < h and nn > 0)
			 	{
					 sale();
					 cout<<" how match::";
					 cin>>b;
					 	sum=sum+ price[nn-1]*b;
				 }else
				 cout<< "enter number between 1 and "<<h<<endl;
					 
				}while(nn != 0);
				
		 
		  
		   
		
			  		
			  		result();
			  	 goto point;
		
			  	
		}
	
		if(l==1)
		{	
				cout<<"enter the number of senf"<<"\n";
				cin>>h;
				ahmed();
				goto point;
		}
			if(l==3)
				{
					display();
				goto 	point;
				}
	
			if(l==0)
		cout<<endl;
		
			  	
		
	}
	
			  
	         

}
