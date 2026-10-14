#include <stdio.h>
int main(void) {
    float p;
    printf("Enter pressure reading: ");
    if (scanf("%f", &p) != 1) return 1;
    if (p < 0) printf("Invalid pressure.\n");
    else if (p < 20) printf("PRESSURE LOW\n");
    else if (p <= 80) printf("PRESSURE IN RANGE\n");
    else printf("PRESSURE HIGH\n");
    return 0;
}
