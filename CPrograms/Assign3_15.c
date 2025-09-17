#include <stdio.h>
#include <math.h>

void main(){

    int num;
    printf("Enter the Number: ");
    scanf("%d", &num);

    int sqrroot = sqrt(num);
    int is_Prime = 1;

    for (int i = 2;i <= sqrroot; i++)
    {
        if (num%i==0)
        {
            is_Prime = 0;
            break;
        }
    }

    if (is_Prime)
    {
        printf("The Number is a Prime Number");
    }
    else
    {
        printf("The Number is not a Prime Number");
    }

}