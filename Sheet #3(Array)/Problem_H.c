/********************************************************************** Problem H **************************************************************************

Author: Karim Mohamed
Date: 15 Feb 2024, 11:21 Am

Problem Statement

You will be given an array of N integers and you have to print the integers in the reverse order.

***********************************************************************************************************************************************************/

#include <stdio.h>
int main(void)
{
    int i;
    int N;
    scanf("%d", &N);
    int ch[N];

    for ( i = 0; i < N; i++)
    {
        scanf("%d", &ch[i]);
    }
        
    while(N--)
    {
        printf("%d ",ch[N]);
    }   
        
    return 0;
}