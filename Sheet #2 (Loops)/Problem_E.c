/********************************************************************** Problem E **************************************************************************

Author: Karim Mohamed
Date: 9 Feb 2024, 5:54 Am

Problem Statement:

Determine the prime numbers in the digits

***********************************************************************************************************************************************************/
#include <stdio.h>

int main()
{
	int N ;
	int Counter = 0;
	
	scanf("%d", &N);
    
    while(N != 0)
    {
        int d = N % 10;
        N /= 10;
        
        if (d == 2 || d == 3 || d == 5 || d == 7)
            Counter++;
    }
    printf("%d", Counter);
}
