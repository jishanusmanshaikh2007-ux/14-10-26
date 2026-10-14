#include <stdio.h>
int main(void) {
    float t;
    printf("Enter motor temperature in Celsius: ");
    if (scanf("%f", &t) != 1) return 1;
    if (t < -20 || t > 200) printf("Invalid reading.\n");
    else if (t < 40) printf("COOL\n");
    else if (t < 65) printf("WARM\n");
    else if (t < 90) printf("HOT\n");
    else printf("OVERHEATING\n");
    return 0;
}
