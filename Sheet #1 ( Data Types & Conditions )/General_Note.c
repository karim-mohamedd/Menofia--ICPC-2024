/********************************************************************** Problem  **************************************************************************

Author: Karim Mohamed
Date: 10 Feb 2024, 10:06 Am

Problem Statement


***********************************************************************************************************************************************************/
#include<stdio.h>

 
int main()
{
	unsigned int n, k;
	
	scanf("%d%d", &n, &k);
	
	for (int i = 1; i <= k; i++)
	{
		n = n - 1;
		
		if (n % 10 == 0)
		{
			n = n / 10;
		}
	}
	printf("%d",n);
	return 0;
}