#include <stdio.h>

enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int main() {
    enum TrafficLight light;

    printf("Enter traffic light value (0-RED, 1-YELLOW, 2-GREEN): ");
    scanf("%d", (int *)&light);

    switch (light) {
        case RED:
            printf("Stop\n");
            break;

        case YELLOW:
            printf("Wait\n");
            break;

        case GREEN:
            printf("Go\n");
            break;

        default:
            printf("Invalid value\n");
    }

    return 0;
}