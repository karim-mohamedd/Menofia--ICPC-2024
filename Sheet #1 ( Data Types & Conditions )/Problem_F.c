/********************************************************************** Problem F **************************************************************************

Author: Karim Mohamed
Date: 3 Feb 2024 , 9:30 Pm

Problem Statement:

You are Given two integers A and B
. Print YES if and only if B is a multiple of A
, otherwise print NO.

***********************************************************************************************************************************************************/
#include <stdio.h>

int main() {
    long long A, B;
    
    scanf("%llu %llu", &A, &B);
    
    if (B % A == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}