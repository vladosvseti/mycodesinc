#include <stdio.h>
#include <stdlib.h>

void turboMode() {
    printf("Turbo mode ON!\n");
}

void safeMode() {
    printf("Safe mode ON!\n");
}
int main() {
    printf("Choose mode:\n1. Turbo Mode\n2. Safe Mode\n");
    int choice;
    void (*mode)();
    scanf("%d", &choice);
    if (choice == 1) {
        mode = turboMode;
    } else if (choice == 2) {
        mode = safeMode;
    } else {
        printf("Invalid choice!\n");
        return 1;
    }
    mode();
    return 0;
}