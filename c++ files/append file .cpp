#include<iostream>
#include<fstream>
#include <string>
using namespace std;

int main()
 { 
  // open file for append (add data to file)
 string city;
	int count;
   ofstream file("it.txt" ,ios::out);
 	cin>> city;
	file<< city  << "\t";
	cin>> count;
	file<< count  << "\n";
	file.close ();
	
}


	
