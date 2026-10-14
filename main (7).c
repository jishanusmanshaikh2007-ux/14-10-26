#include <stdio.h>
int main(void) {
    int distance;
    printf("Enter distance in cm: ");
    if (scanf("%d", &distance) != 1) return 1;
    if (distance < 0) printf("Invalid distance.\n");
    else if (distance <= 10) printf("ACTION: Stop immediately.\n");
    else if (distance <= 30) printf("ACTION: Turn or slow down.\n");
    else printf("ACTION: Move forward.\n");
    return 0;
}
