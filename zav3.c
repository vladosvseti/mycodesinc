#include <stdio.h>

int main() {
	int totalram = 128;
	int usedRam = 40;
	int freeRam = totalram - usedRam;
	printf("Free RAM: %d", freeRam);
}