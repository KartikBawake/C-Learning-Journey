#include <stdio.h>

void main(){

    int a, b;
    printf("Enter the Two Numbers: ");
    scanf("%d%d", &a, &b);

    if(a > b){
        printf("The Maximum is: %d", a);
    }
    else {
        printf("The Maximum is: %d", b);
    }

}