/********************************************************************** Problem Y **************************************************************************

Author: Karim Mohamed
Date: 11 Feb 2024, 3:06 Am

Problem Statement

There is a string sof length 3
, consisting of uppercase and lowercase English letters. Check if it is equal to "YES" (without quotes), where each letter can be in any case. For example, 
"yES", "Yes", "yes" are all allowable.
***********************************************************************************************************************************************************/

#include <stdio.h>

int main() {

    int t;
    scanf("%d", &t);
    
    while(t--)
    {
        char z[4];
        scanf("%s", &z);
        if((z[0] == 'y' || z[0] == 'Y') && (z[1] == 'e' || z[1] == 'E') && (z[2] == 's' || z[2] == 'S'))
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