/********************************************************************** Problem C **************************************************************************

Author: Karim Mohamed
Date: 15 Feb 2024, 9:57 Am

Problem Statement

Given a number N and an array A of N numbers. Print the lowest number and its position.

Note: if there are more than one answer print first one's position.

***********************************************************************************************************************************************************/
#include <stdio.h>
int main(void)
{
        int N;
        int z;
        int min;
        int position;
        
        scanf("%d", &N);
        int ch[N];

        for (int i = 0; i < N; i++)
        {
                scanf("%d", &ch[i]);
        }
        
        min = ch[0];
        position = 0;
        for (int i = 0; i < N; i++)
        {
               if(ch[i] < min)
               {
                   min = ch[i];
                   position = i;
               }
        }        
        
        printf("%d %d", min, position + 1);

        return 0;
}