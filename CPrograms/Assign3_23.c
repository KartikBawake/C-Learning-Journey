#include <stdio.h>

int main(){

   
    for (int i = 1; i < 6; i++)
    {
        int count = 5;
        for (int j = 1; j <= i; j++)
        {
            printf("%d\t", count);
            count--;
        }

        printf("\n");

        if (count<1) {
            return 0;
        }
        
    }
    

}