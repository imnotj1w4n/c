#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
	int c[100001];
	int n,m;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&c[i]);
	scanf("%d",&m);
	sort(c,c+n);
	int left=0,right=n-1;
	while(left<right)
	{
		if (c[left]+c[right]==m)
		{
			printf("%d %d",c[left],c[right]);
		}
		else if (c[left]+c[right]<m)
			left++;
			
		else
			right--;
	
	}
	printf("-1");
	
 } 
