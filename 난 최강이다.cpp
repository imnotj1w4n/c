#include<stdio.h>

int main()

{
char str[1001];
scanf("%[^\n]",str);
for (int i =0;str[i];i++)
{
	if ('A'<=str[i]&&str[i]<='z')
		str[i]=str[i]-'A'+'a'; 
}
printf("%s",str);
		
	
}

