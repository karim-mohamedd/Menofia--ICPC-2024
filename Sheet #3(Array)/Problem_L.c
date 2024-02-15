/********************************************************************** Problem L **************************************************************************

Author: Karim Mohamed
Date: 15 Feb 2024, 2:15 Pm

Problem Statement

You are given an array a
 of length n
, and an integer x
. You can perform the following operation as many times as you would like (possibly zero): replace two adjacent elements of the array by their sum.
 For example, if the initial array was [3,6,9]
, in a single operation one can replace the last two elements by their sum, yielding an array [3,15]
, or replace the first two elements to get an array [9,9]
. Note that the size of the array decreases after each operation.

The beauty of an array b=[b1,…,bk]
 is defined as ∑ki=1⌈bix⌉
, which means that we divide each element by x
, round it up to the nearest integer, and sum up the resulting values. For example, if x=3
, and the array is [4,11,6]
, the beauty of the array is equal to ⌈43⌉+⌈113⌉+⌈63⌉=2+4+2=8
.

Please determine the minimum and the maximum beauty you can get by performing some operations on the original array.
***********************************************************************************************************************************************************/

#include <stdio.h>

int arr[100000 + 5];
int main()
{
    int t,n,x;
    long long int sum = 0;
    long long int maxp = 0;
    
    scanf("%d",&t);
    
    while(t--)
    {
        scanf("%d%d",&n,&x);
        
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            sum += arr[i];
            maxp += (arr[i] / x) + (arr[i] % x != 0);
        }
        printf("%lld %lld\n",(sum / x) + (sum % x != 0), maxp);
        sum = 0;
        maxp = 0;
    }
}

//"https://youtu.be/VldVK6Hod3U?si=k6V_SNvRuR95vxhs" this video helped me to understand this problem.