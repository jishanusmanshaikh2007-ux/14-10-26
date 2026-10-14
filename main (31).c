#include <stdio.h>
int main(void) {
    int h;
    printf("Enter humidity percentage (0-100): ");
    if (scanf("%d", &h) != 1) return 1;
    if (h < 0 || h > 100) printf("Invalid humidity.\n");
    else if (h < 30) printf("DRY\n");
    else if (h <= 60) printf("COMFORTABLE\n");
    else printf("HUMID\n");
    return 0;
}
