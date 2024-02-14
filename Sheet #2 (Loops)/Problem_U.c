/********************************************************************** Problem U **************************************************************************

Author: Karim Mohamed
Date: 11 Feb 2024, 8:14 Am

Problem Statement

Given a lowercase Latin character (letter), check if it appears in the string codeforces.

***********************************************************************************************************************************************************/


#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char c;
        scanf(" %c", &c);

        char str[] = "codeforces";
        int len = strlen(str);
        int found = 0;

        for (int i = 0; i < len; i++) {
            if (tolower(c) == tolower(str[i])) {
                found = 1;
                break;
            }
        }

        if (found)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}