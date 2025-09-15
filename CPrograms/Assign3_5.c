#include<stdio.h>

void main(){

    int num;
    printf("Enter the Number: ");
    scanf("%d", &num);

    int i = 1, out = 1;
    while(i<=num){
        out = out*i;
        if (i<num)
        {
            printf("%d * ", i);
        }
        else{
            printf("%d ", i);
        }
        
        i++;
    }

    printf("= %d", out);

}