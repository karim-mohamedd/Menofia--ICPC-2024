/********************************************************************** Problem N **************************************************************************

Author: Karim Mohamed
Date: 7 Feb 2024, 3:45 Am

Problem Statement
Takahashi is visiting a shop specializing in cabbage.

The shop sells cabbage for X yen (Japanese currency) per head.
However, if you buy more than A heads of cabbage at once, the 

(A+1)-th and subsequent heads will be sold for 

Y yen per head.
(It is guaranteed that 



Y<X. See Sample Input/Output 1 for clarity.)

Print the amount of money needed to buy N heads of cabbage.


***********************************************************************************************************************************************************/
#include <stdio.h>
int main()
{
	int N, A, X, Y;
	
	scanf("%d%d%d%d", &N, &A, &X, &Y);
	
	if (N <= A)
		printf("%d", N * X);
	else if (N >= A)
		printf("%d", A * X + (N - A) * Y);
	
	return 0;
}