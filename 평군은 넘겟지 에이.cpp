#include <cstdio>

int main()
{
	int c,t,s;//케이스  t점수 s 인원  
	double a=0;//평 균 
	double p;//평균ㅇ이상 사람 비 
	
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
	}	///묹제르ㅜㄹ 잘못봐서 처음붜터 해야하는데 안돼오 
	
	
	
	
}
