/********************************************************************** Problem M **************************************************************************

Author: Karim Mohamed
Date: 7 Feb 2024, 3:20 Am

Problem Statement
Snuke is giving cookies to his three goats.

He has two cookie tins. One contains A cookies, and the other contains B cookies. He can thus give A cookies,B cookies or 


if A+B cookies to his goats (he cannot open the tins).

Your task is to determine whether Snuke can give cookies to his three goats so that each of them can have the same number of cookies.

***********************************************************************************************************************************************************/
#include <stdio.h>
int main()
{
	int A, B;
	
	scanf("%d%d", &A, &B);
	
	if (A >= 1 && A <= 100 && B >= 1 && B <= 100)
		if ((A + B) % 3 == 0 || A % 3 == 0 || B % 3 == 0)
		{
			printf("Possible");
		}
		else 
			printf("Impossible");
	
	return 0;
	
}