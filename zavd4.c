#include <stdio.h>

int main() {
	int temp;
	printf("Enter CPU temperature: ");
	scanf("%d", &temp);
	printf("System status: %d degrees OK.", temp);
    return 0;
}