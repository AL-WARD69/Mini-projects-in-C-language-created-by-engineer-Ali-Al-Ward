#include<iostream>
#include<fstream>
#include <string>
using namespace std;
int main()
 { // this file for     
 // part one , creat file and insert data 
	string city; 
	int count;
	fstream file ;	
	
	file.open("it.txt", ios::out  );
	
	cin>> city;
	file << city  << "\t";
	cin>> count;
	file<< count  << "\n";
	file.close();	
}


	
