#include <stdio.h>

void main(){

    int a, b;
    printf("Enter First Number: ");
    scanf("%d", &a);
    printf("Enter Second Number: ");
    scanf("%d", &b);

    int temp1 = a;
    int temp2 = b;

    int i;
    while (b != 0)
    {

        i = a % b;
        printf("%d %% %d = %d\n", a, b, i);
        a = b;
        b = i;

    }

    printf("GCD of %d and %d is %d", temp1, temp2, b);

}