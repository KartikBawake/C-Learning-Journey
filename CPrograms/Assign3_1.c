#include <stdio.h>

void main(){

    char a;
    printf("Enter the Character: ");
    scanf("%c", &a);
    
    int n;
    printf("Enter the Number: ");
    scanf("%d", &n);

    int i = 1;
    while (i<=n)
    {
        printf("%c", a);
        i++;
    }
    

}