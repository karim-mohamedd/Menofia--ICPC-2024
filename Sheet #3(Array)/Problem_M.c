/********************************************************************** Problem M **************************************************************************

Author: Karim Mohamed
Date: 15 Feb 2024, 2:45 Pm

Problem Statement

An array b of length k
is called good if its arithmetic mean is equal to 1
. More formally, if b1+⋯+bkk=1.
Note that the value b1+⋯+bkk is not rounded up or down. For example, the array [1,1,1,2]
has an arithmetic mean of 1.25
, which is not equal to 1.

You are given an integer array a of length n
. In an operation, you can append a non-negative integer to the end of the array.
 What's the minimum number of operations required to make the array good?

We have a proof that it is always possible with finitely many operations.

***********************************************************************************************************************************************************/

#include<stdio.h>
 
int main()
{
	int n, t, sum = 0, i, k;
	int a[1001];
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &t);
		for (k = 1; k <= t; k++)
		{
			scanf("%d", &a[k]);
			sum = sum + a[k];
		}
		if (sum >= t)
		{
			printf("%d\n", (sum - t));
		}
		if (sum < t)
		{
			printf("1\n");
		}
		sum = 0;
	}
	return 0;
}