#include <stdio.h>
int main(void) {
    float t;
    printf("Enter temperature in Celsius: ");
    if (scanf("%f", &t) != 1) return 1;
    if (t < -50 || t > 100) printf("Out-of-range reading.\n");
    else if (t < 18) printf("COLD\n");
    else if (t <= 28) printf("COMFORTABLE\n");
    else printf("HOT\n");
    return 0;
}
