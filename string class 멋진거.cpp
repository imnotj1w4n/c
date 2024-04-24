#include <cstring>
#include <cstdio>
int main()
{
 	char c[101]={0,};
 	char r[101]={0,};
 	int n;
 	scanf("%s", c);
 	scanf("%d",&n);
 	for(int i=0;i<n;i++)
 	{
 		scanf("%s",r);
 		if (strcmp(c,r)==0)
 		{
 			printf("yes");
 			return 0;
	 	}
 	}
		printf("no");
		return 0;
	
	
	
} 
