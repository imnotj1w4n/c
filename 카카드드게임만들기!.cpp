// 카드 게임 만들자 우워우우어어어ㅓ엉!@@@@@@ zl킥에에엑ㅇ크워웡 ㅎ르흐게엑  

#include <stdio.h>

int main()
{
	int i,A[10],B[10];
	for (i =0;i<10;i++) 	
		scanf("%d",&A[i]);
	for (i = 0 ; i < 10 ; i++)
		scanf("%d",&B[i]);

	int A_win = 0,B_win=0;
	
	for(i=0;i<10;i++)
	{
		if (A[i] > B[i]) A_win++;
		else if (A[i] < B[i]) B_win++;
		
		
	}	
	if (A_win>B_win) printf("A가 잇겻다");
	else if (A_win<B_win) printf("B가 이겨싲요");
	else printf("우와 비겻삳"); 
	
	
	
	
	
 } 
