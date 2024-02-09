/********************************************************************** Problem D **************************************************************************

Author: Karim Mohamed
Date: 9 Feb 2024, 4:27 Am

Problem Statement:

Given a number N. Print the square diagonals.

***********************************************************************************************************************************************************/
#include <stdio.h>


int main()
{
	int N;
	
	scanf("%d", &N);
	
	for (int i = 0; i <= N; i++)                    
	{												
		for (int j = 1; j <= N ; j++)
		{
			if(i == j || j == N - i + 1)
				printf("* ");
			else 
				printf("  ");
		}
		printf("\n");
	}
}

