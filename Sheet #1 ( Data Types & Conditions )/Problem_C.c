/********************************************************************** Problem C **************************************************************************

Author: Karim Mohamed
Date: 3 Feb 2024 , 8:20 Am

Problem Statement:


You are given a person's systolic blood pressure, A, and diastolic blood pressure, B
Find the mean arterial pressure, 

***********************************************************************************************************************************************************/

#include <stdio.h>
#include <math.h>

int main() {
    int A, B;
    double C ;
    
    scanf("%d %d", &A, &B);
    
    C = (A - B) / 3.0 + B;
    if (C == floor(C))
     {
         printf("%d\n",(int) C);
     }
    else{
        printf("%.10lf\n", C); 
    }
    return 0;
}