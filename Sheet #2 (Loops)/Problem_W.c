/********************************************************************** Problem W **************************************************************************

Author: Karim Mohamed
Date: 10 Feb 2024, 7:34 Am

Problem Statement:

You are given three integers a, b, and c. Determine if one of them is the sum of the other two.


***********************************************************************************************************************************************************/
#include<stdio.h>

 
int main()
{
	int t;
	int a, b, c;
	
	scanf("%d", &t);
	
	for(int i = 1; i <= t; i++)
	{
		scanf("%d%d%d", &a, &b, &c);
		
		if(c == (a + b) || b == (a + c) || a == (b + c))
		{
			printf("YES\n");
		}
		else
			printf("NO\n");
	}
    return 0;
}