/********************************************************************** Problem P **************************************************************************

Author: Karim Mohamed
Date: 15 Feb 2024, 3:18 Pm

Problem Statement

According to a new ISO standard, a flag of every country should have a chequered field n × m, each square should be of one of 10 colours,
 and the flag should be «striped»: each horizontal row of the flag should contain squares of the same colour,
 and the colours of adjacent horizontal rows should be different. 
Berland's government asked you to find out whether their flag meets the new ISO standard.
***********************************************************************************************************************************************************/

#include <stdio.h>

#define MAX_SIZE 105

int main() {
    int n, m;
    char arr[MAX_SIZE][MAX_SIZE];
    int i, j;

    scanf("%d %d", &n, &m);

    for (i = 0; i < n; ++i) {
        for (j = 0; j < m; ++j) {
            scanf(" %c", &arr[i][j]);
        }
    }

    // check for valid row
    for (i = 0; i < n; ++i) {
        for (j = 0; j < m - 1; ++j) {
            if (arr[i][j] != arr[i][j + 1]) {
                printf("NO\n");
                return 0;
            }
        }
    }

    // check valid column
    for (i = 0; i < m; ++i) {
        for (j = 0; j < n - 1; ++j) {
            if (arr[j][i] == arr[j + 1][i]) {
                printf("NO\n");
                return 0;
            }
        }
    }

    printf("YES\n");

    return 0;
}