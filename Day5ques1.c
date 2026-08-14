#include <stdio.h>

int main() {
    float p, r, t, si, ci;
    char type;

    printf("Type (s/c) and P, R, T: ");
    scanf(" %c %f %f %f", &type, &p, &r, &t);

    if (type == 's') {
        printf("SI = %.2f\n", (p * r * t) / 100);
    } else {
        printf("CI = %.2f\n", p * (1 + r/100) * (1 + r/100) - p);
    }
}

