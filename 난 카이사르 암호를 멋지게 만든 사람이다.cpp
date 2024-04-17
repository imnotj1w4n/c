#include <stdio.h>

int main()
{
	char str[1000];
	int n;
	scanf("%d",&n);
	scanf("%s",str);
	
	for (int i=0;str[i];i++)
	{
		str[i]=str[i]+n;//
		if(str[i]>'Z')
			str[i]=str[i]-26;
		printf("%C",str[i]);	
		
		
		
		
	}	
	return 0;
	
	
	
	
	
	
	
	
	
}
