#include<stdio.h>

void main(){

    for ( int i = 1; i < 6; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            printf(" * ");
        }
        printf("\n");  
    }

    printf("\n\n");

    for (int i = 1; i < 6; i++)
    {
        for (int j = 5; j >= i; j--)
        {
            printf(" * ");
        }

        printf("\n");
        
    }
    
    

}