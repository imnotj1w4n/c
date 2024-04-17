#include <stdio.h>

int main()
{
char str [1000];
scanf("%[^\n]",str);
for (int i=0;str[i];i++)
{

	if (str[i]>='A'&&str[i]<='Z')
		str[i]-='A'+'a';
		
	}
	
printf("%s",str);		
	
	
} 
