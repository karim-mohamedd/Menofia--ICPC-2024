/********************************************************************** Problem O **************************************************************************

Author: Karim Mohamed
Date: 7 Feb 2024, 3:56 Am

Detrimine the food is safe or delicious or dangerous


***********************************************************************************************************************************************************/
int main(){

    int X , A , B;
    scanf("%d%d%d", &X, &A, &B);

    if(B <= A){
        printf("%s","delicious") ;
    }else if(B <= (X + A)){
        printf("%s","safe");
    }else{
        printf("%s","dangerous");
    }
    return 0;
}