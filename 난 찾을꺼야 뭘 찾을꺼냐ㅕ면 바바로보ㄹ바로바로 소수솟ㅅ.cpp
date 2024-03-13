#include <stdio.h>

int main()
{
	int N,M,i,j,count = 0;
	scanf("%d %d",&N,&M);
	for (i=N;i<=M;i++)
	{
		for (j =2;j*j <=i;j++)
		{
			if (i% j == 0) break;
		}
		if (j*j>i) count++;

	}	
	printf("%d",count);
}

