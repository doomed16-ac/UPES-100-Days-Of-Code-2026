#include <stdio.h>

int main() {
    int a = 5, b = 10, t; // Declare variables and the third variable 't'

    t = a; a = b; b = t;   // The swapping logic in a single line

    printf("a = %d, b = %d\n", a, b);
    return 0;
}
