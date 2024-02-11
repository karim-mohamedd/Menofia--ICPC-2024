/********************************************************************** Problem U **************************************************************************

Author: Karim Mohamed
Date: 11 Feb 2024, 8:14 Am

Problem Statement

Given a lowercase Latin character (letter), check if it appears in the string codeforces.

***********************************************************************************************************************************************************/


#include <stdio.h>
int main() 
{
    
    int t;
    char *c;
    
    scanf("%d", &t);
    
    for (int i = 0; i < t; i++)
    {
        scanf("%s", &c[i]);
        if (c[i] == 'c' || c[i] == 'o' || c[i] == 'd' || c[i] == 'e' || c[i] == 'f' || c[i] == 'r' || c[i] == 'e' || c[i] == 's')
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}