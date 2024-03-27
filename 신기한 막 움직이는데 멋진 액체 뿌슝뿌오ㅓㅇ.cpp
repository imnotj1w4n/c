#include<stdio.h>

int main()
{
	int map[100][100];
	int n,m;
	scanf("%d %d",&n,&m);
	int x,y;
	for (int i = 0;i<m;i++)
		for(int j=0;j<n;j++)
		{	
			scanf("%d",&map[i][j]);
			if (map[i][j]==2)
			{
				x=j;
				y=i;	
			}	

		}	
	while(!(map[y+1][x]&&map[y][x+1])) {
		if(!map[y+1][x])y++;
		else if (!map[y][x+1])x++;
	}
	printf("%d %d",x,y);
	return 0;
	
}

