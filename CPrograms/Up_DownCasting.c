#include <stdio.h>

void main(){

    float result = 7/3;
    printf("Result is: %.2f\n", result);

    //Upcasting
    result = (float)7/3;
    printf("Result is: %.2f\n", result);

    //Downcasting
    int num = 8.25;
    printf("Num is: %d/n", num);

}