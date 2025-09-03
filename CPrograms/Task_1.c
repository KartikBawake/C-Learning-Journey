#include <stdio.h>

/* In this program we have to calculate the difference between two number that the user will input and also calculate
   their multiplication.
*/

void main (){

    int a;  // Declaring two variables to store the User Input
    int b;

    printf("Enter the First Number: \n");   //Prompt asking the user to input the first value
    scanf("%d", &a);                        //Storing the First user input

    printf("Enter the Second Number: \n");  //Propmt asking the user to input the second value
    scanf("%d", &b);                        //Storing the Second user input

    int diff = a-b;                         //Deducing the difference of two numbers by subtracting them
    int mul = a*b;                          //Multiplying them to get the value

    printf("The Difference between %d and %d is %d \n", a, b, diff);    //Printing the Difference
    printf("Multiplication between %d and %d is %d", a, b, mul);        //Printing the Multiplication
}