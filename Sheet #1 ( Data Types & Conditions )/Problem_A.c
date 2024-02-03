/********************************************************************** Problem A *************************************************************************

Author: Karim Mohamed
Date: 3 Feb 2024 , 7:18 Am

Problem Statement:

Given a string S
print AC if it perfectly matches Hello,World!; otherwise, print WA.

***********************************************************************************************************************************************************/

#include <stdio.h>
int strCmp(const char* s1, const char* s2);
int main() {
    short int x;
    char S[20];
    
    scanf("%s",S);
    x = strCmp(S,"Hello,World!");
    if (x == 0)
    {
        printf("%s","AC\n");
    }
    else{
        printf("%s","WA\n");
    }
    return 0;
}

int strCmp(const char* s1, const char* s2)
{
    while(*s1 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }
    return *(const unsigned char*)s1 - *(const unsigned char*)s2;
}