#include <stdio.h>
struct SystemStatus {
    int batteryLevel;
    int isScreenOK;
    float temperature;
};
void showStatus(struct SystemStatus *s) {
    printf("BatteryLevel: %d, isScreenOK: %d, temperature: %f\n", s->batteryLevel, s->isScreenOK, s->temperature);
}
void checkSystem(struct SystemStatus *u) {
    u->batteryLevel = 100;
    u->isScreenOK = 1;
    u->temperature = 36.6;
}

int main() {
    struct SystemStatus myOS = {52, 0, 100.0};
    showStatus(&myOS);
    checkSystem(&myOS);
    showStatus(&myOS);
    return 0;
}