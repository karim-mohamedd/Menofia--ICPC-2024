/********************************************************************** Problem B **************************************************************************

Author: Karim Mohamed
Date: 22 Feb 2024, 10:33 Pm

Problem Statement

We have three boxes A, B, and C, each of which contains an integer.
Currently, the boxes A,B, and C contain the integers X, Y, and Z, respectively.
We will now do the operations below in order. Find the content of each box afterward.

Swap the contents of the boxes A and B
Swap the contents of the boxes A and C

***********************************************************************************************************************************************************/

#include <stdio.h>
void swap(unsigned int x, unsigned int y, unsigned int z);
int main() {
    unsigned int x,y,z;
    scanf("%u%u%u",&x,&y,&z);
    
    swap(x, y, z);
    
}
void swap(unsigned int x, unsigned int y, unsigned int z)
{
    int temp = x;
    x = y;
    y = temp;
    temp = x;
    x = z;
    z = temp;
    printf("%u %u %u ",x ,y, z);
}