#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n,t,s;
	pair<int,int> p[100001]={};
	scanf("%d",&n);
	for (int i=0;i<n;i++)
		scanf("%d %d",&p[i].first,&p[i].second);
	sort(p,p+n);
	for(int i=0;i<n;i++)
	{
		printf("%d",p[i].second);
		if (p[i].first !=p[i+1].first)
			printf("\n");
	}
	
}
