#include<cstdio>
#include<utility> 
using namespace std;

int main()
{
	pair<int,double> p[1001];
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int m;
		double a;
		scanf("%d %lf",&m,&a);
		p[i]=make_pair(m,a);
		
	}
	int i,im;
	double ia;
	scanf("%d %d %lf",&i,&im,&ia);
	p[i-1]=make_pair(im,ia);
	int sum_m=0;
	double sum_a=1;
	for (int i =0;i<n;i++)
	{
		sum_m+=p[i].first;
		sum_a*=p[i].second;
		
	}
	int f=sum_m*sum_a;
	printf("%d",f);
	
	
	
	
	
	
	
	
	
}
