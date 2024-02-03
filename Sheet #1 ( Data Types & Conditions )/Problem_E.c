/********************************************************************** Problem E **************************************************************************

Author: Karim Mohamed
Date: 3 Feb 2024 , 7:30 Pm

Problem Statement:

We need to calculate the multiplication of two integers

***********************************************************************************************************************************************************/
#include <stdio.h>
int main()
{
	unsigned long long A, B;
	unsigned long long Mul;
	
	scanf("%llu%llu", &A, &B);
	Mul = A * B;
	printf("%llu",Mul);
	
	return 0;
}