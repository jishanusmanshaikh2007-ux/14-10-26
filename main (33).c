#include <stdio.h>
int main(void) {
    float cm;
    printf("Enter object distance in cm: ");
    if (scanf("%f", &cm) != 1) return 1;
    if (cm < 0) printf("Invalid distance.\n");
    else if (cm < 10) printf("DANGER: Object very close!\n");
    else if (cm <= 50) printf("CAUTION: Object nearby.\n");
    else printf("CLEAR: Safe distance.\n");
    return 0;
}
