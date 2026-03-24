#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));
	int pin;
	int realPin = 1234;
	printf("Hello, ADMIN! Please, enter your PIN: ");
	scanf("%d", &pin);
	if (pin == realPin) {
		printf("Welcome! Your PIN is correct!\n");
	} else {
		printf("\a\nAccess Denied");
		return 0;
	}
	printf("--------------------------------\n");
	for (int i = 1; i <= 5; i++) {
		printf("Loading module %d\n", i);
		Sleep(500);
	}
	while (1) {
		int cmd;
		printf("Enter command (1 - status, 0 - exit): ");
		scanf("%d", &cmd);
		if (cmd == 1) {
			printf("Free RAM: %d\n", rand() % 120 + 8);
		} else if (cmd == 0) {
			printf("Shutting down...");
			break;
		} else if (cmd == 67) {
			while(1) {
				printf("\aGO FUCKYOUSELF!!!");
				Sleep(500);	
			}
		}
	}
    return 0;
}
