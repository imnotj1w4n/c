#include <cstdio>
#include <algorithm>
using namespace std;

int main ()
{
	pair <int,int> p[100001];
	int n;
	scanf("%d",&n);
	for (int i=0;i<n;i++)
	{
		scanf("%d %d",&p[i].second,&p[i].first);
	}
sort(p,p+n);
int now = 0;
int ans = 0; 
for(int i = 0;i<n;i++)
{
	if (now <=p[i].second)
	{
		now = p[i].first;
		ans++;
	}
}
printf("%d",ans);
}
