#include <stdio.h>

	int dv(int n)
	{	int c=0;
		for (int i=1;i<=n;i++)
			if (n%i==0)
				c++;
		
		
		
		
		
		printf("%d",c);
	}
	int main()
	{
		int n;
		scanf ("%d",&n);
		dv(n);
		
		
		
		
		
		
		
	}
	
