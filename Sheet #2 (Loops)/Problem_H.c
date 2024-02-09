/********************************************************************** Problem H **************************************************************************

Author: Karim Mohamed
Date: 9 Feb 2024, 6:46 Am

Problem Statement

Find the number of ways to choose a pair of an even number and an odd number from the positive integers between 
1 and K (inclusive). The order does not matter.

***********************************************************************************************************************************************************/
#include <stdio.h>

int main()
{
	int K ;
	
    scanf("%d",&K);
	
	int Even = K / 2;
	int Odd = K - Even;

	printf("%d",Even * Odd) ;

	return 0;
}