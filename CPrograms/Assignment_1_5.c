// Q9) Program to convert Temperature in Celsius to Fahranheit and Vice-Versa

#include <stdio.h>

void main(){

    // For Celsius to Fahrenheit
    int cel;
    printf("Enter the Value of Celcius to get in Fahrenheit: \n");
    scanf("%d", &cel);
    float fah = (cel*9/5)+32;
    printf("Its %f degree Fahrenheit!!\n\n", fah);

    // For Fahrenheit to Celsius
    int Fahren;
    printf("Enter the Value of Fahreheit to get Celsius: \n");
    scanf("%d", &Fahren);
    float cell = (5*Fahren-32)/9;
    printf("Its %f degree Celsius!!", cell);

}