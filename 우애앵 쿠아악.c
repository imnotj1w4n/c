#include <stdio.h>

int main(){
	
	int N,i,a[1000000],b;
	int count = 0;
	scanf("%d",&N);
	for (i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i = 0; i < N;i++)
	{
		scanf("%d", &b);
		if (a[i]==b)count++;
				
	}
	printf("%d",count);
}
