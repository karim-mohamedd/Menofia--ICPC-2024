/********************************************************************** Problem I **************************************************************************

Author: Karim Mohamed
Date: 7 Feb 2024 , 12:43 Am

Problem Statement

contol the groups if x and y are in the same group print Yes else print No



***********************************************************************************************************************************************************/
#include <stdio.h>
int main()
{
	int x, y;
	
	scanf("%d%d", &x, &y);
	
	if (x == 1 || x == 3 || x == 5 || x == 7 || x == 8 || x == 10 || x == 12)
		if (y == 1 || y == 3 || y == 5 || y == 7 || y == 8 || y == 10 || y == 12)
		{
			printf("Yes");
		}
		else
		{
			printf("No");
		}			
	else if (x == 4 || x == 6 || x == 9 || x == 11)
			if (y == 4 || y == 6 || y == 9 || y == 11)
			{
				printf("Yes");
			}
			else
			{
				printf("No");
			}
	else 
	{
		printf("No");
	}
	
	return 0;
	
}