#include <stdio.h>

int main()
{
	char s[1001];
	int count[26]={0,};
	scanf("%s",&s);
	
	for (int i=0;s[i];i++){
		if('a'<=s[i]&&s[i]<='z')
			s[i]=s[i]-'a'+'A';
		count[s[i]-'A']++;
		}	
		
	for (int i=0;i<26;i++)
		printf("%d",count[i]);
		
		

	
	
}
