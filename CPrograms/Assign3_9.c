#include <stdio.h>

void main(){

    int num;
    printf("Enter the Number: ");
    scanf("%d", &num);

    int temp = num;
    printf("%d = ", temp);

    int i = 2;
    while (num>1)
    {
        
        if(num%i==0){
            printf("%d", i);
            num = num/i;
            
            if (num>1){
                printf(" * ");
            }
        }
        else{
            i++;
        }
    } 

}
