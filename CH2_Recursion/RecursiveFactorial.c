#define CRT_SESCURE_NO_WARNINGS
#include <stdio.h>

int Factorial(int n) {
	if (n > 0) {
		return n * Factorial(n - 1);
	}
	else return 1;
}

int main(void) {
	printf("5!: %d", Factorial(5));
}