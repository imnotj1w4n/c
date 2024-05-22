#include <cstdio>
#include <stack>
#include <queue>
#include <string>
#include<iostream>
using namespace std; 

int main()
{	int n;
	int t;
	int h;
	stack<int>m;
	queue<string>a;
	
	scanf("%d",n);
	scanf("%d",t);
	scanf("%d",h);
	
	for(int i=0;i<=n;i++)
	{	
		string k;
		scanf("%d",t);
		cin >> k;
		m.push(t);
		a.push(k);
		
		
	}
	while(!m.empty())
	{
		printf("%d",m.top());
		m.pop();
	}
	printf("\n");
	while(!a.empty)
	{
		cout<<a.front();
		printf("")
		a.pop();
	}
	
	
	
	
	
 } 
