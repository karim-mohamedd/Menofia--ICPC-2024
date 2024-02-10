/********************************************************************** Problem K **************************************************************************

Author: Karim Mohamed
Date: 10 Feb 2024, 6:18 Am

Problem Statement:

One day three best friends Petya, Vasya and Tonya decided to form a team and take part in programming contests.
Participants are usually offered several problems during programming contests. 
Long before the start the friends decided that they will implement a problem if at least two of them are sure about the solution.
Otherwise, the friends won't write the problem's solution.
This contest offers n problems to the participants. For each problem we know, which friend is sure about the solution.
Help the friends find the number of problems for which they will write a solution.

***********************************************************************************************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    int a,b,c;
    int counter;
    
    scanf("%d", &n);
    
    while(n--)
    {
        scanf("%d%d%d", &a, &b, &c);             
        if((a + b + c) >= 2)
        {
            counter++;
        }
    }
    printf("%d",counter);
}
