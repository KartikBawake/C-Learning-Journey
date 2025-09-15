#include <stdio.h>

void main(){

    int num;
    printf("Enter the Number: ");
    scanf("%d", &num);

    int i = num;
    int out = 1;
    while (i<=num && i!=0)
    {
        out = out * i;
        
        if (i<=num && i>1)
        {
            printf("%d * ", i);
        }
        else
        {
            printf("%d ", i);
        }

        i--;
    }

    printf("= %d", out);

}