// Q8) Accepting three integer numbers from the user and finding their average

#include <stdio.h>

void main(){

    int a ,b, c;

    printf("Enter the First Number:\n");
    scanf("%d", &a);
    
    printf("Enter the Second Number:\n");
    scanf("%d", &b);

    printf("Enter the Third Number:\n");
    scanf("%d", &c);

    float average = (a+b+c)/3;

    printf("The Average for Numbers %d, %d, %d, is %lf", a, b, c, average);

}