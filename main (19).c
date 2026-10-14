#include <stdio.h>
int main(void) {
    float t;
    printf("Enter temperature in Celsius: ");
    if (scanf("%f", &t) != 1) return 1;
    if (t < -50 || t > 500) printf("Invalid reading.\n");
    else if (t < 40) printf("NORMAL TEMPERATURE\n");
    else if (t < 70) printf("WARNING: Temperature rising.\n");
    else printf("ALERT: Possible fire condition!\n");
    return 0;
}
