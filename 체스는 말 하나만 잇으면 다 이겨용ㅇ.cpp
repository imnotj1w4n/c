#include <cstdio>
using namespace std;

int main() 
{
    int chess[6]={1,1,2,2,2,8};
    int i;	 
    int n;
    for(i=0; i<6; i++) 
	{
        scanf("%d", &n);
        printf("%d ", chess[i]-n);
    }
    //�ȳ� �� ���� ���� �ڤ��;� ����  
}
