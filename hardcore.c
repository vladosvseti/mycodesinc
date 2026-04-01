#include <stdio.h>

void real_swap(int *pa, int *pb) {
	int vrema = *pa;
	int vremb = *pb;
	*pb = vrema;
	*pa = vremb;
}
int main() {
	int x = 100;
	int y = 50;
	printf("then: x = %d, y = %d", x, y);
	real_swap(&x, &y);
	printf("now: x = %d, y = %d", x, y);
    return 0;
}
