#include <stdio.h>
int main(void) {
    float litres;
    printf("Enter daily water usage in litres: ");
    if (scanf("%f", &litres) != 1) return 1;
    if (litres < 0) printf("Invalid usage.\n");
    else if (litres < 100) printf("LOW USAGE\n");
    else if (litres <= 300) printf("AVERAGE USAGE\n");
    else printf("HIGH USAGE\n");
    return 0;
}
