#include <stdio.h>

int main() {
    int a = 10, b = 20;

    // The logic to swap values without a third variable
    a = a + b; // a becomes 30 (10 + 20)
    b = a - b; // b becomes 10 (30 - 20)
    a = a - b; // a becomes 20 (30 - 10)

    printf("a = %d, b = %d\n", a, b);
    return 0;
}
