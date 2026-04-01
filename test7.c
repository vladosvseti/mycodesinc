#include <stdio.h>

int main() {
    int power = 500;   // Обычная переменная
    int *p = &power;   // Указатель 'p' теперь хранит АДРЕС переменной 'power'

    printf("Value: %d\n", power);          // Выведет 500
    printf("Address: %p\n", &power);       // Выведет что-то типа 0061FF1C
    printf("Pointer stores: %p\n", p);     // Выведет тот же адрес
    
    // МАГИЯ: меняем значение через указатель
    *p = 999; 
    
    printf("New value: %d\n", power);      // ВЫВЕДЕТ 999!
    
    return 0;
}