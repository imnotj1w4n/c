#include <stdio.h>

int main(){
	
	int m,n;
	int mm,nn;
	scanf("%d %d",&m,&n);
	nn=n;
	mm=m;
	for (mm=m,nn=n;mm<nn;mm++)
		if (mm%2==0||mm%3==0||mm%5==0||mm%7==0)
			printf("%d\n",mm);
	
	
	
	
	
	
	
}
