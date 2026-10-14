#include <stdio.h>
int main(void) {
    int level;
    printf("Enter water level (0-100%%): ");
    if (scanf("%d", &level) != 1) return 1;
    if (level < 0 || level > 100) printf("Invalid level.\n");
    else if (level < 30) printf("ADVICE: Start filling.\n");
    else if (level < 90) printf("ADVICE: Continue monitoring.\n");
    else printf("ADVICE: Stop filling.\n");
    return 0;
}
