/********************************************************************** Problem P **************************************************************************

Author: Karim Mohamed
Date: 11 Feb 2024, 7:30 Am

Problem Statement

There are n stones on the table in a row, each of them can be red, green or blue. 
Count the minimum number of stones to take from the table so that any two neighboring stones had different colors.
Stones in a row are considered neighboring if there are no other stones between them.

***********************************************************************************************************************************************************/

#include <stdio.h>

int main() {
    
    int n;
    int counter = 0;
    scanf("%d", &n);
    char ch[1000];
    for (int i = 1; i <= n; i++)
    {
        scanf("%s",&ch[i+1]);
        
        if(ch[i] == ch[i+1])
            counter++;
    }
    printf("%d",counter);
}