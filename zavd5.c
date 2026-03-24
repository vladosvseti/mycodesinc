#include <stdio.h>

int main() {
	int temp;
	printf("Enter CPU temperature: ");
	scanf("%d", &temp);
	if (temp < 150) {
		printf("System status: %d degrees OK.", temp);
	} else {
		if (temp > 2147483647) {
			printf("YOU COMPUTER WILL BE DESTROYED IN 1 SECOND!!");
		} else {
			printf("System status: %d degrees SO BAD.", temp);	
		}
	}
    return 0;
}