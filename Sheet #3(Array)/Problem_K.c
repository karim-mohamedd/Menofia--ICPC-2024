/********************************************************************** Problem K **************************************************************************

Author: Karim Mohamed
Date: 15 Feb 2024, 1:26 Pm

Problem Statement

Little Chris is bored during his physics lessons (too easy), so he has built a toy box to keep himself occupied.
The box is special, since it has the ability to change gravity.

There are n columns of toy cubes in the box arranged in a line. The i-th column contains ai cubes. 
At first, the gravity in the box is pulling the cubes downwards. When Chris switches the gravity,
it begins to pull all the cubes to the right side of the box. 
The figure shows the initial and final configurations of the cubes in the box: 
the cubes that have changed their position are highlighted with orange.


Given the initial configuration of the toy cubes in the box, find the amounts of cubes in each of the n columns after the gravity switch!



***********************************************************************************************************************************************************/

#include <stdio.h>

void bubbleSort(int arr[], int size);
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int size = sizeof(arr) / sizeof(arr[0]);     /*the size of the array , can be calculated by divide the size of array over size of any element in the array*/ 

    bubbleSort(arr, size);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void bubbleSort(int arr[], int size)                        /*bubble sort */
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}