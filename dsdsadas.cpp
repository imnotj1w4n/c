#include <stdio.h>

int main()
{
	int tell;
	int count[10] = {0,};
	scanf ("%d",&tell);
	for (int i=0;i<8;i++)
	{
		count[tell%10]++;
		tell/=10;
		
		
	}
	count[6]+= count[9]+1;
	count[6]/=2;
	count[9]=count[6];
	int max_count = 0;
	for (int i =0; i<10;i++)
	{
		if (max_count<count[i])
			max_count = count[i];
			
	}
	printf("%d",max_count);
	return 0;
	
	
	
	
	
	
	
	
	
	
}
