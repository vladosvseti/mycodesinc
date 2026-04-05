#include <stdio.h>
#include <string.h>
#include <ctype.h>
// Функция для проверки, является ли строка палиндромом
int isPalindrome(const char* str) {
    int left = 0; // Указатель на начало строки
    int right = strlen(str) - 1; // Указатель на конец строки

    while (left < right) {
        // Пропускаем неалфавитные символы
        while (left < right && !isalnum(str[left])) {
            left++;
        }
        while (left < right && !isalnum(str[right])) {
            right--;
        }

        // Сравниваем символы в нижнем регистре
        if (tolower(str[left]) != tolower(str[right])) {
            return 0; // Если символы не совпадают, строка не является палиндромом
        }
        left++;
        right--;
    }
    return 1; // Если все символы совпали, строка является палиндромом
}
int main() {
    char input[100]; // Буфер для ввода строки
    printf("Введите строку: ");
    fgets(input, sizeof(input), stdin); // Считываем строку с пробелами

    // Удаляем символ новой строки, если он есть
    input[strcspn(input, "\n")] = '\0';

    if (isPalindrome(input)) {
        printf("Строка является палиндромом.\n");
    } else {
        printf("Строка не является палиндромом.\n");
    }

    return 0;
}
//все?