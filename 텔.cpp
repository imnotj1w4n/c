#include <stdio.h>
int find(int p,int t)
{
	if(t==p) return p;
	return find(teleporter[p],t-1;)
}
int main()
{
	int n,p,t;
	int tp[1000];
	scanf("%d %d %d",&n,&p,&t);
	
	for(int i=1;i<=n;i++)
	{
		scanf("%d",tp[i]);
		
	}
	printf("%d",find(p,t))
	
	
 } 
