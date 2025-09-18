#include <stdio.h>
#include <math.h>

void main(){

    int num = 100;

    for (int i = 2; i <= num; i++)
    {
        int is_prime = 1;
        for (int j = 2; j < i; j++)
        {
            if (i%j == 0)
            {
                is_prime = 0;
                break;
            }
            
        }

        if (is_prime == 1)
        {
            printf("%d\t", i);
        }   
    }

}