#include <cstdio>
#include <stack>
using namespace std;

int main()
{
	char str[101];
	scanf("%s",str);
	stack<int>s;
	for (int i =0;str[i];i++)	
	{
		if ('0'<=str[i]&&str[i]<='9')
			s.push(str[i]-'0');
			
		else
		{
			int a = s.top();
			s.pop();
			int b = s.top();
			s.pop();
			if (str[i]=='+')
				s.push(b+a);
			else	
				s.push(b-a);
					
					
					
					
		}
		
		
	}
	printf("%d",s.top());
	
	
	
	
}
