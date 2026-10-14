#include <stdio.h>
int main(void) {
    int level;
    printf("Enter water level (0-100%%): ");
    if (scanf("%d", &level) != 1) return 1;
    if (level < 0 || level > 100) printf("Invalid level.\n");
    else if (level >= 95) printf("WARNING: Overflow risk!\n");
    else printf("No overflow warning.\n");
    return 0;
}
