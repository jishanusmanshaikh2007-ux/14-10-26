#include <stdio.h>
int main(void) {
    float t;
    printf("Enter robot temperature in Celsius: ");
    if (scanf("%f", &t) != 1) return 1;
    if (t < -20 || t > 150) printf("Invalid reading.\n");
    else if (t < 50) printf("TEMPERATURE NORMAL\n");
    else if (t <= 75) printf("TEMPERATURE HIGH: Monitor.\n");
    else printf("OVERHEATING: Stop robot.\n");
    return 0;
}
