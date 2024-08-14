#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
	int N;
	int Kid[201];
	int dp[201]={};
	int a=1;
	
	scanf("%d", &N);
	for(int i=1; i<=N; i++)
	{
		scanf("%d",&Kid[i]);
		if(i==1)
		{
			dp[i]=1;
		}
		else
		{	dp[i]=1;
		    for(int j=i; j>=1; j--)
			{
				if(Kid[i]>Kid[j])	
				{
					dp[i]=max(dp[i],dp[j]+1);
				}
			}
			a=max(a, dp[i]);
		}
	}
	printf("%d",N-a);
}
