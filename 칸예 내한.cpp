#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> d[8];
int check[1001];

int bfs(int start)
{
	queue<int> q;
	q.push(start);
	check[start] =1;
	
	while(!q.empty()){
		int x = q.front();
		q.pop();
		printf("%d",x);
		
		for(int i=0;i<d[x].size();i++){
			int y = d[x][i];
			
			if(!check[y]){     
				q.push(y);
				check[y]=1;
			
			
			}
		  }
		}
	}
	

