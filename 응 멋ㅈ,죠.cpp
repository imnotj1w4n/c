#include<stdio.h>
int main(){
	
int N,i,a,sum=0;
scanf("%d",&N);
for(i=0;i<N;i++)
{
	scanf("%d",&a);
	sum +=a;
}
sum /=N;
if (sum >=80) printf("easy");
else if (sum >=60)	printf("normal");
else printf("hard");
return 0;	
	
	
}

