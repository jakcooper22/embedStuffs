#include <stdio.h>

extern int count;

void writeit(void) {
	int count = 5;
	printf("count: %d\n", count);
}
