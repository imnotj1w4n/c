#include <stdio.h>

int main()
{
	char str[1000];
	scanf("%s",str);
	
	for (int i=0;str[i];i++)
	{
		str[i]=str[i]-3;//
		if(str[i]<'A')
			str[i]=str[i]+26;
		printf("%C",str[i]);	
		
		
		
		
	}	
	return 0;
	
	
	
	
	
	
	
	
	
}
