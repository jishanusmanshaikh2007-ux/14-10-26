#include <stdio.h>
int main(void) {
    float a, b;
    printf("Enter first reading: ");
    if (scanf("%f", &a) != 1) return 1;
    printf("Enter second reading: ");
    if (scanf("%f", &b) != 1) return 1;
    if (a > b) printf("Sensor 1 is higher.\n");
    else if (b > a) printf("Sensor 2 is higher.\n");
    else printf("Both readings are equal.\n");
    return 0;
}
