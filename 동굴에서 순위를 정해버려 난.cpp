#include<cstdio>
#include<queue>
using namespace std;

int main()
{
	
	
	int n,k;
	scanf("%d %d",&n,&k);
	queue<int> p;
	for(int i=1;i<=n;i++)
	{
		q.push(i);
		
	}
	while(!q.empty)
	{
		for (int i=0;i<k-1;i++)
		{
			q.push(q.front());
			q.pop();
		}
		printf("%d",q.front())
		q.pop();
	} 
	return 0;
}
