#include <stdio.h>
int main(void) {
    int level;
    printf("Enter water level (0-100%%): ");
    if (scanf("%d", &level) != 1) return 1;
    if (level < 0 || level > 100) printf("Invalid level.\n");
    else if (level <= 25) printf("PUMP ON: Tank needs filling.\n");
    else if (level >= 90) printf("PUMP OFF: Tank is sufficiently full.\n");
    else printf("PUMP STATUS: Monitor level.\n");
    return 0;
}
