/********************************************************************** Problem A **************************************************************************

Author: Karim Mohamed
Date: 20 Feb 2024, 8:22 Pm

Problem Statement

Shichi-Go-San (literally "Seven-Five-Three") is a traditional event in a certain country to celebrate the growth of seven-, five- and three-year-old children.

Takahashi is now X years old. Will his growth be celebrated in Shichi-Go-San this time?

***********************************************************************************************************************************************************/

#include <stdio.h>
void Calc(void);
int main()
{
	Calc();
	return 0;
}

void Calc(void)
{
	int X;
	scanf("%d",&X);
	if(X==7||X==5||X==3)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO");
	}
}