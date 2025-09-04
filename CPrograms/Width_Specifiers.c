#include <stdio.h>

void main(){

    int a =10, b=15;

    printf("%d", a);
    printf("%d", b);

    printf("%5d", a); //___10
    printf("-%5d", a); // 10___

    printf("%d", b); //10___15

    float num = 9.6f;
    printf("%7.3f", num); //__9.600
    printf("%-9.6d", num); //9.60_______
    printf("Good Morning");

}