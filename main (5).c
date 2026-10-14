#include <stdio.h>
int main(void) {
    float cm;
    printf("Enter obstacle distance in cm: ");
    if (scanf("%f", &cm) != 1) return 1;
    if (cm < 0) printf("Invalid distance.\n");
    else if (cm < 15) printf("STOP\n");
    else if (cm <= 40) printf("SLOW DOWN\n");
    else printf("MOVE\n");
    return 0;
}
