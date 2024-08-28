#include <iostream>
#include <vector>
#include<cstdio>
using namespace std;

vector<int> d[1001];
int check[1001];
int dfs(int x)
{
	if(check[x])
	{
		return ;
	}
	check[x]=1;
	printf("%d",x);
	
	for(int i=0;i<d[x].size();i++){
		int y = d[x][i];
		dfs(y);
	}
	
} 
int main ()
{
	int n,m;
	int a,b;
	scanf("%d %d",&n,&m);
	
	for(int i= 0;i<m;i++)
	{
		scanf("%d %d" ,&a,&b);
		d[a],push_back(b);
		d[b],push_back(a);
	}
	int cnt=0;																						
	for(int i=1;i<=n;i++)
	{
		if(check[i]==0)
		{
			cnt++;
			dfs(i);
		}
	}
	
	printf("%d",cnt);
	
}
