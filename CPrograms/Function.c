// Function with parameters and return type

#include <stdio.h>

int addition(int, int);

int main(){

    int a, b;
    printf("Enter Two Numbers: \n");
    scanf("%d%d", &a, &b);
    int sum = addition(a, b);
    printf("The Sum is: %d", sum);
    return 0;

}

int addition(int x, int y){

    int sum = x+y;
    return sum;

}