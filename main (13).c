#include <stdio.h>
int main(void) {
    int charge;
    printf("Enter battery charge (0-100%%): ");
    if (scanf("%d", &charge) != 1) return 1;
    if (charge < 0 || charge > 100) printf("Invalid charge.\n");
    else if (charge < 20) printf("BATTERY LOW: Recharge.\n");
    else if (charge < 80) printf("BATTERY MEDIUM\n");
    else printf("BATTERY HIGH\n");
    return 0;
}
