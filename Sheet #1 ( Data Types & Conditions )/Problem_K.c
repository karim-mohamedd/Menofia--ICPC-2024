/********************************************************************** Problem K **************************************************************************

Author: Karim Mohamed
Date: 7 Feb 2024 , 1:34 Am

Problem Statement
You are given a real number X.Y, where 
Y is a single digit.

print X+
or X
or X-



***********************************************************************************************************************************************************/

#include <stdio.h>

int main() {
    int X, Y;
    char Z;
    
    scanf("%d %c %d", &X, &Z, &Y);
    
    if (Y >= 0 && Y <= 2)
        printf("%d-", X);
    else if (Y >= 3 && Y <= 6)
        printf("%d", X);
    else if (Y >= 7 && Y <= 9)
        printf("%d+", X);
    
    return 0;
}