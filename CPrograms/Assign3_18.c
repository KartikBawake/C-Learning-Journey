#include<stdio.h>

void main(){

    int a;
    int b;
    printf("Enter 2 numbers: ");
    scanf("%d%d", &a, &b);


    for (int i = a; i <= b; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("%d * %d = %d\t", i, j, i*j);
        }

        printf("\n");
        
    }

}