#include<cstdio>
#include<iostream>
#include<string>
using namespace std;

string s;

void ins(int b,string temp){
	s=s.substr(0,b)+temp + s.substr(b,s.size()-b);
	
}

void del(int b)
{
	s=s.substr(0,b)+s.substr(b+1,s.size()-b-1);
}
int main()
{
	int n;
	scanf ("%d",&n);
	for (int i=0;i<n;i++)
	{
		int a;
		scanf("%d",&a);
		if(a==0)
		{
			int b;
			scanf("%d",&b);
			string temp;
			cin>>temp;
			ins(b,temp);
			
		}
		else if(a==1)
		{
			int b;
			scanf("%d",&b);
			del(b);
		}
		else
		{
			cout << s;
			printf("\n");
		}

	}
	
	
	
	
	
}
