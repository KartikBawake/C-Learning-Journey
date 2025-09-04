//Types of Errors - Runtime error, linker error, runtime error, logical error;

#include <stdio.h>

void main(){

    printf("hello"); // not giving ; here coulve lead to 

    int res = 10/0; // it will lead to runtime error and code will get executed only above this line.

    Printf("Hello"); // It will lead to Linker error

    //logcal error is getting undesired output.

}