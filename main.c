#include <stdio.h>
int main(void) {
    float litres, max;
    printf("Enter stored rainwater in litres: ");
    if (scanf("%f", &litres) != 1) return 1;
    printf("Enter storage capacity in litres: ");
    if (scanf("%f", &max) != 1) return 1;
    if (litres < 0 || max <= 0 || litres > max) printf("Invalid storage data.\n");
    else if (litres < max * 0.25f) printf("STORAGE LOW\n");
    else if (litres < max * 0.80f) printf("STORAGE MODERATE\n");
    else printf("STORAGE HIGH\n");
    return 0;
}
