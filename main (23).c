#include <stdio.h>
int main(void) {
    int distance, battery;
    printf("Enter obstacle distance in cm: ");
    if (scanf("%d", &distance) != 1) return 1;
    printf("Enter battery percentage: ");
    if (scanf("%d", &battery) != 1) return 1;
    if (distance < 0 || battery < 0 || battery > 100) {
        printf("Invalid sensor input.\n");
    } else if (battery < 15) {
        printf("STATUS: Return to charging station.\n");
    } else if (distance < 15) {
        printf("STATUS: Obstacle detected; stop.\n");
    } else if (distance <= 40) {
        printf("STATUS: Obstacle nearby; slow down.\n");
    } else {
        printf("STATUS: Ready to move.\n");
    }
    return 0;
}
