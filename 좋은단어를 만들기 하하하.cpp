#include <cstdio>
#include <stack>
#include <string.h>
using namespace std;

char str[100001];
int n;
int main() 
{

	int ans = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) 
	{
		scanf("%s", str);
		stack<char> st;
		int m = strlen(str);
		for (int j = 0; j < m; j++) 
		{
			if (!st.empty()&&st.top()==str[j]) st.pop();
			else st.push(str[j]);
		}
		if (st.empty()) ans++;
	}
	printf("%d\n", ans);
}
