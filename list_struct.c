#include <stdio.h>
#include <stdlib.h>

struct Process {
    int pid;
    float usage;
};

void showProcess(struct Process *p, int size) {
    for (int i = 0; i < size; i++) {
        printf("PID: %d, CPU Usage: %f\n", p[i].pid, p[i].usage);
    }
}
int main() {
    struct Process *ptr = malloc(3 * sizeof(struct Process));
    ptr[0].pid = 101;
    ptr[0].usage = 25.5;
    ptr[1].pid = 102;
    ptr[1].usage = 35.0;
    ptr[2].pid = 103;
    ptr[2].usage = 45.5;
    showProcess(ptr, 3);
    free(ptr);
    return 0;
}