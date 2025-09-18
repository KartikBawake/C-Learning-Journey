#include <stdio.h>
#include<math.h>

void main(){

    int num;
    printf("Enter the Number: ");
    scanf("%d", &num);

    int count = 0;

    for (int i = num + 1; ; i++)
    {
        int is_prime = 1;
        for (int j = 2; j <= sqrt(i); j++)
        {
            if(i % j == 0){
                is_prime = 0;
                break;
            }
            
        }

        if (is_prime)
        {
            printf("%d\t", i);
            count++;
        }

        if(count == 5){
            break;
        }
        
    }
    

}