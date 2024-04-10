#include<stdio.h>

int n1(int n){
	return (n-2)*(n+1)*n/2;
}

int n2(int n)
{
	return (n*n*n)-((n-1*(n-1)*(n-1)));
}
int n3(int n)
{
	return (3*n*n*n)-(n*n)-(3*n);
}

int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	if (m==1)
		printf("%d",n1(n));
	else if(m==2) 
		printf("%d",n2(n));
	else 
		printf("%d",n3(n)); 
	
	
	
	
	
	
}
