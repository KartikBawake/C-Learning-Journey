#include <stdio.h>

void main(){

    int num;
    printf("Enter the Number: ");
    scanf("%d", &num);

    int a=0, b=1, fib = 0;
    for ( int i = 0; i <= num; i++)
    {

        printf("%d\n", fib);
        fib = a + b;
        a = b;
        b = fib;

    }

}