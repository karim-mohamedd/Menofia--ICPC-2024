/********************************************************************** Problem B **************************************************************************

Author: Karim Mohamed
Date: 3 Feb 2024 , 7:30 Am

Problem Statement:

You are given two integers 

A and B as the input. 
the Output is the value of A+B.

However, if A+B is 10 or greater, output error instead.

***********************************************************************************************************************************************************/
#include <stdio.h>
int main()
{
	unsigned int A, B;
	
	scanf("%d",&A);
	scanf("%d",&B);
	
	if ((A + B) >= 10)
	{
		printf("error\n");
	}
	else
	{
		printf("%d", A + B);
	}
}