#include <stdio.h>
int main(void) {
    float depth;
    printf("Enter water depth in metres: ");
    if (scanf("%f", &depth) != 1) return 1;
    if (depth < 0) printf("Invalid depth.\n");
    else if (depth < 1) printf("WARNING: Very shallow water.\n");
    else if (depth <= 5) printf("Water depth is moderate.\n");
    else printf("Water depth is deep.\n");
    return 0;
}
