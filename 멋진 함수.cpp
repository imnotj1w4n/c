#include <stdio.h>

int n(int s)
{

	int t=0;
	while(n>=0)
	{
	
		t=t*10+s%10;
		s/=10;
		return s;
		
		
	
	}
	
	
}
int main()
{	 int s;
	scanf("%d",&s);
	printf("%d",n(s));
	
	
}
