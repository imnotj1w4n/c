#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	string w;
	string a;
		
	cin>>w;
	cin>>a;	
	
	
	for (int i=0;w.size()+1>i;i++)
	{
	
	 cout <<w.substr(i,3)+a;
	 	printf("\n");
	 }
		
	
	
	
	
}
