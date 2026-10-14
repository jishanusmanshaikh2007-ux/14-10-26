#include <stdio.h>
int main(void) {
    int detected;
    printf("Enter IR sensor result (1=detected, 0=clear): ");
    if (scanf("%d", &detected) != 1) return 1;
    if (detected == 1) printf("OBJECT DETECTED\n");
    else if (detected == 0) printf("PATH CLEAR\n");
    else printf("Invalid sensor state.\n");
    return 0;
}
