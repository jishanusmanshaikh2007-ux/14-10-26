#include <stdio.h>
int main(void) {
    float t;
    int h;
    printf("Enter temperature in Celsius: ");
    if (scanf("%f", &t) != 1) return 1;
    printf("Enter humidity percentage: ");
    if (scanf("%d", &h) != 1) return 1;
    if (t < -50 || t > 100) printf("Temperature: INVALID\n");
    else if (t < 18) printf("Temperature: COLD\n");
    else if (t <= 28) printf("Temperature: NORMAL\n");
    else printf("Temperature: HOT\n");
    if (h < 0 || h > 100) printf("Humidity: INVALID\n");
    else if (h < 30) printf("Humidity: LOW\n");
    else if (h <= 60) printf("Humidity: NORMAL\n");
    else printf("Humidity: HIGH\n");
    return 0;
}
