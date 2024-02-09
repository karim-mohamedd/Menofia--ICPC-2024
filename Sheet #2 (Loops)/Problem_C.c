/********************************************************************** Problem C **************************************************************************

Author: Karim Mohamed
Date: 9 Feb 2024 , 4:12 Am

Problem Statement:

Draw hollow square: Given a number N. Print a square.

***********************************************************************************************************************************************************/
#include <stdio.h>


int main()
{
	int N;
	
	scanf("%d", &N);
	
	for (int i = 1; i <= N; i++)                    
	{												
		for (int j = 1; j <= N ; j++)
		{
			if(i == 1 || i == N || j == 1 || j == N )
				printf("* ");
			else 
				printf("  ");
		}
		printf("\n");
	}
}

