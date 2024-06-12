#include<cstdio>
#include<algorithm>
#include<stack>
using namespace std;

stack<pair<int, int> > s;

int ans[500000];
int main()	
{
	int n,x;
	scanf("%d",&n);
	s.push({ 999999999,0 });
	
	for (int i=0;i<n;i++)
	{
		scanf("%d",&x);
		while(s.top().first<x)
		{
			s.pop();
		}
		ans[i] = s.top().second;
		s.push({x,i+1});
		
	}
	for (int i=0;i<n;i++)
	{
		printf("%d ",ans[i]);
	}

























}
