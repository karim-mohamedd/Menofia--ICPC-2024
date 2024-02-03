/********************************************************************** Problem H **************************************************************************

Author: Karim Mohamed
Date: 3 Feb 2024 , 9:42 Pm


Problem Statement
This is the 214
214-th AtCoder Beginner Contest (ABC).

The ABCs so far have had the following number of problems.
The 1 1-st through 125
125-th ABCs had 4 
4 problems each.

The 126 126-th through 211 211-th ABCs had 6
6 problems each.

The 212 212-th through 214
214-th ABCs have 8
8 problems each
***********************************************************************************************************************************************************/
#include <stdio.h>

int main() {
    int N;
	
    scanf("%d", &N);
        
    if(N >= 1 && N <= 125)
        printf("%d", 4);
    else if(N > 125 && N <= 211)
        printf("%d",6);
    else if(N > 211 && N <= 214)
        printf("%d",8);
    return 0;
}