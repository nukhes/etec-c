#include <stdio.h>

int main() {
	int numeros[4];

	for (int i = 0; i<=3; i++) {
		printf("digite um numero: ");
		scanf("%i", &numeros[i]);
	}

	for (int j = 0; j<=3; j++) {
		if (numeros[j] % 2 == 0 && numeros[j] % 3 == 0) {
			printf("\n[%i] - e divisivel por 2 e 3.", numeros[j]);
		} else {
			printf("\n[%i] - NAO e divisivel por 2 e 3.", numeros[j]);
		}
	}

	/*

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

	*/
}