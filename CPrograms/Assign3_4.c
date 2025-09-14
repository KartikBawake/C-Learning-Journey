#include <stdio.h>

void main(){

    int num, sum = 0, lastdigit, reverse = 0;
    printf("Enter the 4 digit Number: ");
    scanf("%d", &num);

    while(num != 0){

        lastdigit = num%10; //Removes all the digits except the last and stores it in "Lastdigit" variable.
        sum = sum + lastdigit; //Adds the last digit with sum variable and assigns the total value to the sum again.
        reverse = reverse*10+lastdigit; //Adds the last digit in the reverse to set it as first in unit and multiplies it by 10
        num = num / 10; //Divides the number by 10 to remove the last digit.

    }
    printf("The Sum of the Number is: %d\n", sum);
    printf("The Reverse is: %d", reverse);


}