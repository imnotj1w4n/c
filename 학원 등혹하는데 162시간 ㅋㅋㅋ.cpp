#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
	int t[1001];
	int n;
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
		scanf("%d",&t[i]);
	sort(t+1,t+n+1);
	int ans = 0;
	for (int i=1;i<n;i++)
	{
		ans +=t[i]*(n-1);
	}
	printf("%d",ans);
}
