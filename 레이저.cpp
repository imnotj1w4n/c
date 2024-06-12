 #include <cstdio>
 #include <stack>
 using namespace std;
 
 char a[100001];
 
 int main() {
 	scanf("%s",&a);
 	stack<int>s;
	int ans = 0;
	for (int i=0;a[i];i++)
	{
		if(a[i]=='(')
		{
			s.push(i);
		}
		else
		{
			if (s.top()+1==i)
			{
				s.pop();
				ans +=s.size();
				}	
				else 
				{
					s.pop();
					ans += 1;
					
							}
		}
	 } 
	 printf("%d",ans);
	 
 }
