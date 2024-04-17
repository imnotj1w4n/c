#include <stdio.h>

int main()
{
	char s[1000];
	scanf ("%s",s);
	int p[26];
	for (int i=0;i<26;i++)
	{
		p[i] = -1;
	}
	for (int i=0;s[i];i++)
	{
		if (p[s[i]-'a']==-1)
			p[s[i]-'a']=i;
	}
	for (int i=0;i<26;i++)
		printf("%d",p[i]);
	return 0;		
	
	
	
	
	
	
	
	
	
	
	
	
}
