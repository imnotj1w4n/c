#include <cstdio>

int main(){

long long n,m,i;
scanf("%lld %lld%lld",&n,&m,&i);
if(n/m ==(i-1)/m)
	printf("0");
else printf("%lld",(i-1)%m+1);

return 0;	
}
