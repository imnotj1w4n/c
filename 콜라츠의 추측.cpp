#include <stdio.h>

int cc(int n)
{	
	if(n==1) return 0;
	if(n%2==0) return 1 + cc(n/2);
	else return 1+cc(n*3+1) ;
			
	
}

int main()
{	int n;
	scanf("%d",&n);
	printf("%d",cc(n));
	return 0;
	
	
	
	
	
	
	
	
	
}
