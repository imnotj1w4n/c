#include <vector>
#include <cstdio> 
#include <algorithm>
using namespace std;


int main()
{
	int n,k;
	vector<int> v;
	scanf("%d",&n);
	scanf("%d",&k);
	for (int i=0;i<n;i++)
	{
		int temp;
		scanf("%d",&temp);
		v.push_back(temp);
	}
	sort(v.begin() ,v.end() );
	
	printf("%d",v[k-1]);

	
}
