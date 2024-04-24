#include <cstdio>
#include <iostream>
#include <string>
using namespace std; 
int main ()
{
	string blist = "";
	string name;
	int n;
	scanf ("%d",&n);
	int count = 0;
	for (int i=0;i<n;i++)
	{
		cin >> name;
		int index_name=blist.find(name);
		if(index_name<0)
		{
			if (count ==0)
			{
				blist+=name;
				count++;
				
			}
			else if(count <=2)
			{
				blist +=" "+name;
				count++;
			}
			else
			{
				int index_blank=blist.find(" ");
				blist=blist.substr(index_blank+1,blist.size());
				blist+=" "+name;
			}
		}	
		cout<<blist;
		printf("\n");
	}
	return 0; 
}
