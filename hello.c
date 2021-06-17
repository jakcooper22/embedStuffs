#include <stdio.h>

int funcTest();
extern int count;
extern void writeit();

int main() {
	int count = 5;
	funcTest();
	writeit();
	return 0;
}

int funcTest() {
	printf("hello \n");
}
