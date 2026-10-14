#include <stdio.h>
int main(void) {
    float a, b, difference;
    printf("Enter sensor A reading: ");
    if (scanf("%f", &a) != 1) return 1;
    printf("Enter sensor B reading: ");
    if (scanf("%f", &b) != 1) return 1;
    difference = a - b;
    if (difference < 0) difference = -difference;
    printf("Absolute difference = %.2f\n", difference);
    if (difference > 20) printf("Readings differ significantly.\n");
    else printf("Readings are close.\n");
    return 0;
}
