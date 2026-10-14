#include <stdio.h>
int main(void) {
    float reading, limit;
    printf("Enter sensor reading: ");
    if (scanf("%f", &reading) != 1) return 1;
    printf("Enter maximum allowed value: ");
    if (scanf("%f", &limit) != 1) return 1;
    if (limit < 0) printf("Invalid threshold.\n");
    else if (reading > limit) printf("ALERT: Threshold exceeded!\n");
    else if (reading == limit) printf("At the threshold.\n");
    else printf("Reading is within the limit.\n");
    return 0;
}
