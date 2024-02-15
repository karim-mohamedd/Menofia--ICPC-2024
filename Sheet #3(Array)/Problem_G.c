/********************************************************************** Problem G **************************************************************************

Author: Karim Mohamed
Date: 15 Feb 2024, 11:05 Am

Problem Statement

When preparing a tournament, Codeforces coordinators try treir best to make the first problem as easy as possible. 
This time the coordinator had chosen some problem and asked n
people about their opinions. Each person answered whether this problem is easy or hard.

If at least one of these n
people has answered that the problem is hard, the coordinator decides to change the problem. 
For the given responses, check if the problem is easy enough.

***********************************************************************************************************************************************************/

#include <stdio.h>
int main(void)
{
        int N;
        int counter = 0;
        scanf("%d", &N);
        int ch[N];

        for (int i = 0; i < N; i++)
        {
                scanf("%d", &ch[i]);
        }
        
        for (int i = 0; i < N; i++)
        {
               if(ch[i] == 1)
                    counter = 1;
        }   
        
        if (counter == 1)
            printf("HARD");
        else 
            printf("EASY");
        
        return 0;
}