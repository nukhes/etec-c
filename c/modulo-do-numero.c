#include <stdio.h> // adiciona bibliotecas
#include <math.h> // biblioteca de matemática

/*

inteiro     -   int (%i)
real        -   float/double (%f)
caractere   -   char (%c) (%s) 
logico      -   bool (%b)

*/

int main() {
    int c = 0;
    printf("DIGITE UM NUMERO: ");
    scanf("%i", &c);
    if (c<0) {
        c = c*(-1);
    }
    printf("%i\n\n", c);

    system("pause");
    return 0;
}