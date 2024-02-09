/********************************************************************** Problem G **************************************************************************

Author: Karim Mohamed
Date: 9 Feb 2024, 6:31 Am

Problem Statement

Print a number between 
A and B (inclusive) that is a multiple of C.

***********************************************************************************************************************************************************/
#include <stdio.h>

int main()
{
    int A, B, C;
    int i;
    int count = 0;
    scanf("%d%d%d", &A, &B, &C);

    for (i = A; i <= B; i++)
    {
        if ((i % C) == 0)
        {
            printf("%d\n", i);
            count++;
            break;
        }
    }
    if (count == 0)
    {
        printf("%d", -1);
    }
    return 0;
}