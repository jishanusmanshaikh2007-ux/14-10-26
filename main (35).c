#include <stdio.h>
int main(void) {
    int light;
    printf("Enter light level (0-1000): ");
    if (scanf("%d", &light) != 1) return 1;
    if (light < 0 || light > 1000) printf("Invalid light reading.\n");
    else if (light < 200) printf("DARK\n");
    else if (light < 700) printf("DIM / NORMAL\n");
    else printf("BRIGHT\n");
    return 0;
}
