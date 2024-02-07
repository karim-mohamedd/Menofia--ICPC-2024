/********************************************************************** Problem J **************************************************************************

Author: Karim Mohamed
Date: 7 Feb 2024 , 12:57 Am

Problem Statement

AtCoDeer has three cards, one red, one green and one blue.
An integer between 1 and 9 (inclusive) is written on each card: 

r on the red card, 
g on the green card and 
b on the blue card.
We will arrange the cards in the order red, green and blue from left to right, and read them as a three-digit integer.
Is this integer a multiple of 4?

***********************************************************************************************************************************************************/
#include <stdio.h>
int main()
{
	int r , g , b, Num ;
	scanf ("%d%d%d", &r, &g, &b);
	
	Num = r*100 + 10*g + b;
	
	if (Num % 4 == 0)
		printf("YES");
	else 
		printf("NO");
	
	return 0;
}