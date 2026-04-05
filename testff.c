#include <stdio.h>

int main() {
    int x;
    printf("Введи любое число: ");
    fflush(stdout); // Это принудительно вытолкнет текст на экран
    scanf("%d", &x);
    printf("Ура! Ты ввел: %d\n", x);
    return 0;
}