#include<cstdio>


int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	int check[n+1];
	check[0]=1;
	check[1]=1;
	for(int i=2;i*i<=n; i++){
	
		if(check[i]==false){
			for (int j=i*i;j<=n;j+=i){
			
				check[j]=true;
			}
		}
	}
		

	for (int i=m;i<=n;i++){
		if (check[i]==false){
			printf("%d\n",i);
		}
	}
	
	
	
		
}
