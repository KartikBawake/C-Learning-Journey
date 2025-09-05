// Q10) Write a program to calculate area and parameter of a triangle

#include <stdio.h>
#include <math.h>

void main (){

    int a = 1, b = 2, c = 4;
    int perimeter = a + b + c*a + b + c;
    printf("The Perimeter of the Traingle is %d\n", perimeter);

    float s = (a + b + c)/2;
    float area = sqrt((s*(s-a)*(s-b)*(s-c)));
    printf("The Area of Triangle is %f", area);

}