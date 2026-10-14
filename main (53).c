#include <stdio.h>
int main(void) {
    float capacity, level;
    printf("Enter tank capacity in litres: ");
    if (scanf("%f", &capacity) != 1) return 1;
    printf("Enter current level percentage: ");
    if (scanf("%f", &level) != 1) return 1;
    if (capacity < 0 || level < 0 || level > 100) printf("Invalid input.\n");
    else {
        float remaining = capacity * (100.0f - level) / 100.0f;
        printf("Empty capacity remaining: %.2f litres\n", remaining);
    }
    return 0;
}
