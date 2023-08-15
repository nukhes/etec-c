#include <stdio.h>

int main() {
	int a, b, c, d;

	printf("digite um numero: ");
	scanf("%i", &a);
	printf("digite um numero: ");
	scanf("%i", &b);
	printf("digite um numero: ");
	scanf("%i", &c);
	printf("digite um numero: ");
	scanf("%i", &d);

	if ((a % 2) ==  0 && (a % 3) == 0) {
		printf("%i e divisivel por 2 e 3.", a);
	}
	if ((b % 2) ==  0 && (a % 3) == 0) {
		printf("%i e divisivel por 2 e 3.", b);
	}
	if ((c % 2) ==  0 && (a % 3) == 0) {
		printf("%i e divisivel por 2 e 3.", c);
	}
	if ((d % 2) ==  0 && (a % 3) == 0) {
		printf("%i e divisivel por 2 e 3.", d);
	}
}