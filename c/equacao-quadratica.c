#include <stdio.h> // adiciona bibliotecas
#include <math.h>
/*

inteiro     -   int (%i)
real        -   float/double (%f)
caractere   -   char (%c) (%s) 
logico      -   bool (%b)

*/

int main() {
    float a,b,c,delta,x1,x2;
    
    printf("A: ");
    scanf("%f", &a);
    printf("B: ");
    scanf("%f", &c);
    printf("C: ");
    scanf("%f", &c);
    
    delta = (b*b) - 4*a*c;
    
    x1 = (-(b) + sqrt(delta))/2*a;
    x2 = (-(b) - sqrt(delta))/2*a;
    
    printf("x1: %f\nx2: %f", x1, x2);

    return 0;
}
