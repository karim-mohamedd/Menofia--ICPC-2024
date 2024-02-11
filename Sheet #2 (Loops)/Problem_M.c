/********************************************************************** Problem M **************************************************************************

Author: Karim Mohamed
Date: 10 Feb 2024, 11:32 Pm

Problem Statement

On Planet E, snails are born in infinitely deep wells!

Initially a snail is at n
meters below the ground. During the daytime the snail try very hard to climb up, and goes up by a
meters. It can escape the well once it touches the ground. However during the night the snail has to sleep and falls back by b
meters. Hence it may happens that an unfortunate snail stucks in the well forever.

Can you help the snails on Planet E to determine the number of days they need to escape the well?
***********************************************************************************************************************************************************/
#include<stdio.h>

 
int main()
{
	int T;
	int n, a, b;
	int Counter = 0;
	
	scanf("%d",&T);
	
	for (int i = 1 ; i <= T ; i++)
	{
		scanf("%d%d%d", &n, &a, &b);
		
		if (a < n && b >= a)
		{
			printf("%d\n", -1);
		}
		else if (n == a)
		{
			printf("%d\n",1);
		}
		else if (a < n && b < a)
		{
			while(n > 0)
			{
				n -= a;
				Counter++;
				if (n <= 0)
				{
					break;
				}
				n += b;
			}
			printf("%d\n",Counter);
		}
	}
	return 0;
}