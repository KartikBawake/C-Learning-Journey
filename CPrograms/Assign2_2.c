#include <stdio.h>

void main(){

    int num;
    int den;

    printf("Enter the Numerator:\n");
    scanf("%d", &num);

    printf("Enter the Denominator:\n");
    scanf("%d", &den);

    if(den == 0){
        printf("The Denominator can't be zero!!");
    }
    else{
        int div = num/den;
        printf("The Division is: %d", div);
    }
    
}