#include <stdio.h>
int main(void) {
    int moisture;
    printf("Enter soil moisture (0-100%%): ");
    if (scanf("%d", &moisture) != 1) return 1;
    if (moisture < 0 || moisture > 100) printf("Invalid moisture reading.\n");
    else if (moisture < 30) printf("SOIL DRY: Water the plant.\n");
    else if (moisture <= 70) printf("SOIL MOISTURE OK.\n");
    else printf("SOIL WET: No watering needed.\n");
    return 0;
}
