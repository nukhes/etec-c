#include <stdio.h> // adiciona bibliotecas

/*

inteiro     -   int (%i)
real        -   float/double (%f)
caractere   -   char (%c) (%s) 
logico      -   bool (%b)

*/

int main() {
	int ix;
	float c,d;
	float nums[4][1];

	for (ix = 1; ix < 5; ix++) {
		printf("DIGITE UMA NOTA: ");
		scanf("%f", &nums[ix][1]);
	}

	c = (nums[1][1] + nums[2][1] + nums[3][1] + nums[4][1])/4;

	if (c >= 7) {
		printf("APROVADO");
	} else {
		printf("DIGITE A NOTA EXAME: ");
		scanf("%f", &d);
		c = (c+d)/2;
		if (c >= 5) {
			printf("APROVADO EM EXAME");
		} else {
			printf("REPROVADO");
		}
	}  
	printf(", SUA MEDIA E: %.2f\n\n", c);

	return 0;
}
