#include <stdio.h>
int main(void) {
    int value;
    printf("Enter sensor reading (0-100): ");
    if (scanf("%d", &value) != 1) return 1;
    if (value < 0 || value > 100) printf("Invalid reading.\n");
    else if (value < 30) printf("LOW\n");
    else if (value <= 70) printf("NORMAL\n");
    else printf("HIGH\n");
    return 0;
}
