/********************************************************************** Problem P **************************************************************************

Author: Karim Mohamed
Date: 7 Feb 2024, 4:09 Am

Problem Statement
Is it possible to get a sum of 
�
B when throwing a die with six faces A times?

***********************************************************************************************************************************************************/
int main(){

    int A , B;
    scanf("%d%d", &A, &B);
    if(B >= A*1 && B <= A*6){
        printf("%s","Yes");
    }else{
        printf("%s","No");
    }
    return 0;
}
