#include <stdio.h>
int main(void) {
    float a, b;
    printf("Enter sensor reading 1: ");
    if (scanf("%f", &a) != 1) return 1;
    printf("Enter sensor reading 2: ");
    if (scanf("%f", &b) != 1) return 1;
    printf("Sum = %.2f\n", a + b);
    return 0;
}
