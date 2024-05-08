#include <stdio.h>
#include <cstring>
#include <iostream>
using namespace std;

int main()
{	int c=0;
	int t=0;
	string h; ///ababababaaabaaabaaa
	string b1;  //aaa
	
	cin>>h; //abababbaabbbbaab
	cin>>b1; //aba
	
	for (int i=0;h.size()>i;i++)
		{
			if(c=h.find(b1))
			{
			
				t++;
		
			}
				
		}
			
		
	
	
	printf("%d",t);
	
	
	
	
	
	
}
