#include <stdio.h>

int main()
{
	long long N;
	int count =0;
	int temp = 0;
	scanf("%lld",&N);
	
	while (N>=10)
	{
		temp =0;
		
		while (N)
		{
			temp += N%10;
			N /=10;
		
		}
		N = temp;
		count++;
	
	
	
	
	
	
	
	}
	printf("%d",count);
	return 0;
	
	
	
	
	
	
	
	
}
