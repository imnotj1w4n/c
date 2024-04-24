#include <cstdio>
#include <string>
#include <iostream>
using namespace std;

int main()
{
	string s;
	cin>>s;
	string bomb;  
	cin >>bomb;
	int bsize=bomb.size();
	int index=0;
	while (1)
	{
		index =s.find(bomb);
		if (index < 0){
		
			break;
		}
			
		s=s.substr(0,index)+s.substr(index+bsize,s.size());
	}
		if (s.size()==0)
			printf("¿ì¿Õ");
		else
			cout << s;
			
		
	}
	
	
	
	
	
	
	
	
		

