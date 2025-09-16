#include <stdio.h>

void main(){

    int num;
    printf("Enter the Number: ");
    scanf("%d", &num);

    int i, j=1, fac=1;
    for (i = 1; i <= num ; i++)
    {
        fac = fac * i;
        if (j==1)
        {
            printf("%d", i);
            j = 0;
        }
        else{
            printf(" * %d", i);
        }
        
    }

    printf(" = %d", fac);
    

}