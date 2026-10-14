#include <stdio.h>
int main(void) {
    int level;
    printf("Enter tank level (0-100%%): ");
    if (scanf("%d", &level) != 1) return 1;
    if (level < 0 || level > 100) printf("Invalid level.\n");
    else if (level < 25) printf("Tank is nearly empty.\n");
    else if (level < 75) printf("Tank is partly filled.\n");
    else if (level < 100) printf("Tank is almost full.\n");
    else printf("Tank is FULL.\n");
    return 0;
}
