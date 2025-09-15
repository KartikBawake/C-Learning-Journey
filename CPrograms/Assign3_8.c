#include <stdio.h>

void main(){

    int num;
    printf("Enter the Number: ");
    scanf("%d", &num);

    int i = num;
    while (i<=num && i>=1)
    {
        int j = 1;
        while ((j<=num) && (j<=i))
        {
            if(j*i == num){
                int out = j*i;
                printf("%d * %d = %d\n", j , i, out);
            }

            j++;
        }

        i--;
    }
    

}