/********************************************************************** Problem E **************************************************************************

Author: Karim Mohamed
Date: 15 Feb 2024, 10:34 Am

Problem Statement

Given a number N and an array A of N numbers. Print the array after doing the following operations:

Replace every positive number by 1. Replace every negative number by 2.

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
               if(ch[i] > 0)
                    ch[i] = 1;
                    
               else if(ch[i] == 0)
                    ch[i] = 0;
                    
               else
                    ch[i] = 2;
        }        
        
         for (int i = 0; i < N; i++)
        {
            printf("%d ",ch[i]);
        } 
        
        return 0;
}