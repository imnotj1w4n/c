#include <iostream>
#include<stdio.h>
using namespace std;
int main()
{
	string a;
	string b;
	
	cin >>a;
	cin >>b;
	
	if (a.size()>b.size())
		cout << a;
		
	else {
		if (a>b)
			cout <<a;
		else 
			cout << b;
	}
	
	
	
	
	
	
	
	
	
}
