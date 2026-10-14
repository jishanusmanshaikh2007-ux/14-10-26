#include <stdio.h>
int main(void) {
    int level;
    printf("Enter water level (0-100%%): ");
    if (scanf("%d", &level) != 1) return 1;
    if (level < 0 || level > 100) printf("Invalid level.\n");
    else if (level < 15) printf("CRITICAL LOW LEVEL\n");
    else if (level <= 85) printf("LEVEL IN OPERATING RANGE\n");
    else printf("HIGH LEVEL: Check tank.\n");
    return 0;
}
