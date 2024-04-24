#include <iostream> 
#include <cstring>
using namespace std;
int main()
{
	char s[10000];
	int t;
	cin >>t;
	int check = 0;
	int len=strlen(s);
	for (int i=0;i<t;i++)
	{	scanf("%s",s);
		for(int i=0;i<len/2;i++)	
			if (s[i] !=s[len-1-i])
			{
				check +=1;
				break;
				}	
		
	}
	printf("%d",check);
	
	
	
	
	
	
	
	
	
}
