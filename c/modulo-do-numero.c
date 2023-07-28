#include <stdio.h> // adiciona bibliotecas
#include <math.h> // biblioteca de matemática

/*

inteiro     -   int (%i)
real        -   float/double (%f)
caractere   -   char (%c) (%s) 
logico      -   bool (%b)

*/

int main() {
    int i;
    printf("DIGITE UM NÚMERO: ");
    scanf("%i", &i);
    if (i<0) {
        i = i*(-1);
    }
    printf("%i", i);
}