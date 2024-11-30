 #include<iostream>
#include<fstream>
#include <string>
using namespace std;

int main()
 { 
 string letters;
 string token;
 int position =-1;
 string line;
 ifstream file;
     cout<<"enter search word ";
     cin>>letters;
     "\n";
     
     file.open("data.txt"); 
         while( ! file.eof())
         { 
		 getline(file, line) ;
		
		   if (line.find(token) == string)
		   cout << line << endl;
		 else 
		    cout << token << " not found" << endl;
		 }

     //}
     //cout<<"Cant find"<<letters<<endl;
 }
 
 
