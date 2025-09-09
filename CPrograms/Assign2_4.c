#include <stdio.h>

void main(){

    int a, b, c;
    printf("Enter 3 Numbers: \n");
    scanf("%d%d%d", &a, &b, &c);

    if (a>b && a>c){
        printf("The Maximum is: %d", a);
    }
    else if (b>a && b>c){
        printf("The Maximum is: %d", b);
    }
    else{
        printf("The Maximum is: %d", c);
    }
    
}