#include <stdio.h>

void main(){

    int num = 500;
    for (int i = 1; i <= num; i++)
    {
        int temp = i;
        int sum = 0;

        for (; temp > 0; )
        {
            int digit = temp % 10;
            sum = sum + (digit*digit*digit);
            temp = temp/10;
        }
        
        if (sum == i)
        {
            printf("%d\t", i);
        }
        
    }

}