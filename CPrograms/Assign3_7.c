#include<stdio.h>

void main(){

    int num;
    printf("Enter the Number: ");
    scanf("%d", &num);
    int first_comma = 1;

    int i=1;
    while (i<num)
    {
        
        int factor = num%i;
        if(factor == 0)
        {
            printf("%d, ", i);
        }

        i++;
    }

    printf("\b\b  ");

}