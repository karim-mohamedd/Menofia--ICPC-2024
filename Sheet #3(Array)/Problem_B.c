/********************************************************************** Problem  **************************************************************************

Author: Karim Mohamed
Date: 15 Feb 2024, 9:39 Am

Problem Statement

Given a number N and an array A of N numbers. Determine if the number X exists in array A or not and print its position (0-index).

Note: X may be found once or more than once and may not be found.

***********************************************************************************************************************************************************/
#include <stdio.h>
int main(void)
{
        int N;
        int Ai;
        int count = 0;
        
        scanf("%d", &N);
        int ch[N];

        for (int i = 0; i < N; i++)
        {
                scanf("%d", &ch[i]);
        }
        scanf("%d", &Ai);

        for (int i = 0; i < N; i++)
        {
               if(ch[i] == Ai)
               {
                        printf("%d",i);
                        count = 1;
                        break;
               }
                     
        }        
        if (count == 0)
                printf("%d", -1);

        return 0;
}