#include <cstdio>

int main()
{
	int c,t,s;//���̽�  t���� s �ο�  
	double a=0;//�� �� 
	double p;//��դ��̻� ��� �� 
	
	scanf("%d",&c);
	
	for (int i=0;i<c;i++)
	{
		scanf("%d",&s);
		for (int n=0;n<s;n++)
			{
				scanf("%d",&t);
					a=a+t;	
					a=a/s;
					if (t>=a)
					{
						p++;
					 } 
					 p=p/a;
			} 
		
			
		printf("%f",p);
		a=0;
		s=0;	
	}	///�L�����̤� �߸����� ó������ �ؾ��ϴµ� �ȵſ� 
	
	
	
	
}
