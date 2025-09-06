// Signed and Unsigned Variables

#include <stdio.h>

int main(){

    int a = 50;
    int b = -50;

    signed int c = 60;
    signed int d = -60;

    unsigned int e = 70;
    // unsigned int f = -70; // Unsigned Variable is not used to store negative values.

    printf ("%d%d%d%d%d", a, b, c, d, e);

    return 0;
}