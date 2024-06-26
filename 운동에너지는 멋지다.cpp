#include <cstdio>
using namespace std;

int main()
{
	int n,m,v;
	int s1=0;
	int s2=0;
	int s3=0;
	int p;
	scanf("%d",&n);
	
	for (int i=1;i<n+1;i++)
		{
			scanf("%d %d",&m,&v);
			p=0.5*m*v*v;
			if(s1<p)
			{
				s1=p;
			}
			if(s1>p and s2<p)
			{
				s2=p;
			}
			if(s1>p and s2>p and s3<p)
			{
				s3=p;
			}
			
		}
	
		printf("%d\n",s1);
		printf("%d\n",s2);
		printf("%d\n",s3);

	return 0; 
	
	
	
	
	
	
	
}
