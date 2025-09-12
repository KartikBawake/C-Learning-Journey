#include <stdio.h>

int main(){

    /*int num1 = 10;
    int *ptr = &num1;

    printf("num1 = %d\n", num1);
    printf("&num1 = %u\n", &num1);

    printf("ptr = %u\n", ptr);
    printf("&ptr = %u\n", &ptr);
    printf("*ptr = %u", *ptr);

    */

    // Size of the Pointer - 

    // The Size of a POinter variable is 4bytes on a 32 bit pc and its 8bytes on 64 bit PC/LAPTOP

    int num1 = 10;
    char ch = 'A';
    float fl = 1.02f;
    double dl = 1.0222;

    int *ptr = &num1;
    char *c_ptr = &ch;
    float *f_ptr = &fl;
    double *d_ptr = &dl;

    printf("*ptr = %d\n", sizeof(ptr));
    printf("*c_ptr = %d\n", sizeof(c_ptr));
    printf("*f_ptr = %d\n", sizeof(f_ptr));
    printf("*d_ptr = %d", sizeof(d_ptr));

    return 0;
}