/********************************************************************** Problem A **************************************************************************

Author: Karim Mohamed
Date: 14 Feb 2024, 2:29 Pm

Problem Statement

Given a number N and an array A of N numbers. Print the absolut
e summation
 of these numbers.

absolute
 value
 : means to remove any negative sign in front of a number .

EX : |-5| = 5 , |7| = 7


***********************************************************************************************************************************************************/

#include <stdio.h>

int main()
{
    long long N;
    long long sum = 0;
    scanf("%lld",&N);
    
    while(N--)
    {
        long long Ai;
        
        scanf("%lld", &Ai);
        sum += Ai;
    }
    if (sum < 0)
        printf("%lld\n", -sum);
    else
        printf("%lld\n",sum);
    return 0;
}