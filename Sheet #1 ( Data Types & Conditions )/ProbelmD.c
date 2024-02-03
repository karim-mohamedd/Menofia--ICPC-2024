/********************************************************************** Problem D **************************************************************************

Author: Karim Mohamed
Date: 3 Feb 2024 , 9:30 Am


Problem Statement
How many integers not less than A and not more than B are there?

***********************************************************************************************************************************************************/
#include <stdio.h>
int main()
{
    int A, B;
    int C;
	
	scanf("%d%d",&A,&B);
	
      if (A >= 1 && A <= 100 && B >= A && B <= 100) {
        C = (B - A) + 1;
        printf("%d",C);
    } else {
        printf("%d",0);
    }

    return 0;
}