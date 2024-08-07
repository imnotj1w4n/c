#include <cstdio>

int gcd(int a,int b)
{
	if(a%b==0)
		return b;
	else 
		return gcd(b,a%b);
}

int pos[100000],dist[100000];

int main ()
{
	int n;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		scanf("%d",&pos[i]);
		
	}
	for ( int i=0;i<n;i++){
		dist[i]=pos[i+1]-pos[i];
	}
	int g=dist[0];
	for (int i=1;i<n-1;i++){
	
		g=gcd(dist[i],g);
	}
	
	int ans =0;
	for (int i=0;i<n-1;i++){
		ans += dist[i] / g - 1;
	}
	printf("%d",ans);

}
