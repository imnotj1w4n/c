#include <stdio.h>

int main()
{
	int m[10000];
	int max = 0;
	int s = 0;
	int n=0;
	scanf ("%d",&n);
	
	for (int i=0;i<n;i++)
	{
		scanf("%d",&m[i]);
			if (max<m[i])
				max = m[i];
		
	
	}
		for (int i=0;i<n;i++)
	{

			if (max==m[i]);
				s++;
	}

	printf("%d",s);
	

}
