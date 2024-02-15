/********************************************************************** Problem F **************************************************************************

Author: Karim Mohamed
Date: 15 Feb 2024, 10:53 Am

Problem Statement

Vanya and his friends are walking along the fence of height h and they do not want the guard to notice them.
In order to achieve this the height of each of the friends should not exceed h.
If the height of some person is greater than h he can bend down and then he surely won't be noticed by the guard.
The height of the i-th person is equal to ai.

Consider the width of the person walking as usual to be equal to 1, while the width of the bent person is equal to 2. 
Friends want to talk to each other while walking, so they would like to walk in a single row.
What is the minimum width of the road, such that friends can walk in a row and remain unattended by the guard?
***********************************************************************************************************************************************************/

#include <stdio.h>
int main(void)
{
        int N;
        int ai;
        int count = 0;
		
        scanf("%d%d", &N, &ai);
        int ch[N];

        for (int i = 0; i < N; i++)
        {
                scanf("%d", &ch[i]);
        }
        
        for (int i = 0; i < N; i++)
        {
               if(ch[i] > ai)
                    count +=2;
               else 
                    count++;
        }        
        printf("%d",count);
        
        return 0;
}