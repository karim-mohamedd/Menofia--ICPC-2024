/********************************************************************** Problem D **************************************************************************

Author: Karim Mohamed
Date: 15 Feb 2024, 10:24 Am

Problem Statement

Given a number N and an array A of N numbers. Print all array positions
that store a number less than or equal to 10 and the numberstoredin that position.
 
***********************************************************************************************************************************************************/
#include <stdio.h>
int main(void)
{
        int N;

        scanf("%d", &N);
        int ch[N];

        for (int i = 0; i < N; i++)
        {
                scanf("%d", &ch[i]);
        }
        
        for (int i = 0; i < N; i++)
        {
               if(ch[i] <= 10)
               {
                    printf("A[%d] = %d\n",i,ch[i]);
               }
        }        
        
        return 0;
}