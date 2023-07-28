#include <stdio.h> // adiciona bibliotecas
#include <math.h> // biblioteca de matemática

/*

inteiro     -   int (%i)
real        -   float/double (%f)
caractere   -   char (%c) (%s) 
logico      -   bool (%b)

*/

int main() {
    int ix;
    float c;
    float nums[4][1];
    
    for (ix = 1; ix < 5; ix++) {
        printf("DIGITE UMA NOTA: ");
        scanf("%f", &nums[ix][1]);
    }
    
    c = (nums[1][1] + nums[2][1] + nums[3][1] + nums[4][1])/4;
    
    if (c > 4) {
        printf("APROVADO");
    } else {
        printf("REPROVADO");
    }
    printf(", SUA MÉDIA É: %f", c);
}