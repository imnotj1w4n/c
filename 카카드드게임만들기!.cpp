// ī�� ���� ������ ���������þ�!@@@@@@ zlű��������ũ���� ������Կ�  

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
	if (A_win>B_win) printf("A�� �հ��");
	else if (A_win<B_win) printf("B�� �̰ܚ��");
	else printf("��� ����"); 
	
	
	
	
	
 } 
