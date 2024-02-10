/********************************************************************** Problem I **************************************************************************

Author: Karim Mohamed
Date: 10 Feb 2024 , 4:32 Am

Problem Statement:

Bear Limak wants to become the largest of bears, or at least to become larger than his brother Bob.

Right now, Limak and Bob weigh a and b respectively. It's guaranteed that Limak's weight is smaller than or equal to his brother's weight.

Limak eats a lot and his weight is tripled after every year, while Bob's weight is doubled after every year.

After how many full years will Limak become strictly larger (strictly heavier) than Bob?

***********************************************************************************************************************************************************/
#include <stdio.h>

int main()
{
	int a, b;
	int count = 1;
	
	scanf("%d%d", &a, &b);
	
	for(int i = 0; i < 10; i++)
	{
		a = a * 3;                               
		b = b * 2;
		
		if (a <= b )
		{
			count++;
		}
		else
		{
			break;
		}
	}
	printf("%d", count);
	
	return 0;
}