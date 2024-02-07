/********************************************************************** Problem L **************************************************************************

Author: Karim Mohamed
Date: 7 Feb 2024 , 3 Am

Problem Statement
There are three cards on the desk, each with a positive integer written on it. The integers on the cards are A, B, and C.

You have chosen two cards and picked them up.

Find the maximum possible sum of the integers written on the picked cards.

find Sum of largest 2 nembers in 3 numbers 

***********************************************************************************************************************************************************/
#include <stdio.h>
int MaxSum(int x, int y, int z);
int main() {
	int A, B, C, Sum;
	
	scanf("%d%d%d",&A, &B, &C);
	Sum = MaxSum(A, B, C);
	printf("%d",Sum);
	
}

int MaxSum(int x, int y, int z)
{
	int Max_S;
	
	Max_S = x + y ;
	
	if (y + z > Max_S)
		Max_S = y + z;
	if (x + z > Max_S)
		Max_S = x + z;
	
	return Max_S;
}