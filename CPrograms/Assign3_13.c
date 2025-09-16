#include <stdio.h>

void main(){

    int a, b;
    printf("Enter the Base Number: ");
    scanf("%d", &a);
    printf("Enter the Index: ");
    scanf("%d", &b);

    int mul = 1;
    for (int i=1; i<=b; i++)
    {
        mul = mul * a;
    }
    printf("Output: %d", mul);

}