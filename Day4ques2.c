#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Sum = %d\n", n * (n + 1) / 2);
    return 0;
}
