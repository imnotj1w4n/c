#include <stdio.h>

int main()
{
	char str_og[100001];
	char str_en[100001]={0,};	
	int d,l,index=0;
	scanf("%d %d",&l,&d);
	scanf("%s",str_og);
	for (int i=0;str_og[i];i++)
	{
		if(str_en[index])index++;
		str_en[index]=str_og[i];
		index=index+d;
		if(index>=1)index=index-1;
		
		
	}
	printf("%s",str_en);

}
