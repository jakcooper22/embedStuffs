#include <stdio.h>

extern int a, b;
extern int c;
extern float d;

int main () {
	int a, b;
	int c;
	float f;

	a = 10;
	b = 20;
	c = a + b;
	printf("value of c: %d \n", c);
	
	return 0;
}
