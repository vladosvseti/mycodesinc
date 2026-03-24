#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

int checkPIN (int cpin) {
	if (cpin == 1234) {
		printf("Welcome! Your PIN is correct!\n");
		return 0;
	} else {
		printf("\a\nAccess Denied");
		return 1;
	}
} 
void loading() {
	printf("--------------------------------\n");
	for (int i = 1; i <= 5; i++) {
		printf("Loading module %d\n", i);
		Sleep(500);
	}
}
int getRandomRAM() {
	return rand() % 120 + 8;
}
void showHistory() {
	for (int i = 0; i < 5; i++) {
		printf("Event %d: %d\n", i+1, history[i]);
	}
int len(list) {
	return sizeof(list) / sizeof(list[0]);	
}
void pushToArray(list, ind) {
	for(int i = 0; i < len(list); i++) {
}

}
int main() {
	srand(time(NULL));
	int pin;
	int realPin = 1234;
	printf("Hello, ADMIN! Please, enter your PIN: ");
	scanf("%d", &pin);
	int check = checkPIN(pin);
	if (check){return 0;}
	loading();
	
	int history[5] = {1, 2, 3, 4, 5};
	while (1) {
		int cmd;
		printf("Enter command (1 - status, 0 - exit, 2 - history): ");
		scanf("%d", &cmd);
		if (cmd == 1) {
			printf("Free RAM: %d\n", getRandomRAM());
		} else if (cmd == 0) {
			printf("Shutting down...");
			break;
		} else if (cmd == 67) {
			while(1) {
				printf("\aGO FUCKYOUSELF!!!");
				Sleep(500);	
			}
		} else if (cmd == 2) {
			showHistory;
		}		
	}
    return 0;
}
