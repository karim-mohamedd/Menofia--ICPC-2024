/********************************************************************** Problem A **************************************************************************

Author: Karim Mohamed
Date: 7 Feb , 10:32 Pm

Problem Statement:

Given a number N. Print a left angled triangle that has N rows.

***********************************************************************************************************************************************************/
#include <stdio.h>


int main()
{
	int N;
	
	scanf("%d", &N);
	
	for(int i = 0; i < N; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%s","*");
		}
		printf("\n");
	}
}

