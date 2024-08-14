#include <cstdio>

int main()
{
	int t;
	int a;
	int b;
	
	scanf ("%d",&t);
	
	for (int i=0;i<t;i++)
	{	scanf("%d %d",&a,&b);
		while(1)
		{
			if(a%b!=0)
			{
			
			 a=a*2;
			 b=b*2;	
			}
			if(a%b!=0)
			{
			
			 a=a*2;
			 b=b*2;	
			}
			else
			{
				printf("%d%d",a,b);
			}
				
		}
	}
			
}
	
	
	
	
	
	
	
	
	

