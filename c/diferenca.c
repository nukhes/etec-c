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
    float c;
    float nums[2][1];
    
    for (i = 1; i < 3; i++) {
        printf("DIGITE UM NÚMERO: ");
        scanf("%f", &nums[i][1]);
    }
    
    if (nums[1][1] > nums[2][1]) {
        c = nums[1][1] - nums[2][1];
    } else if (nums[1][1] < nums[2][1]) {
        c = nums[2][1] - nums[1][1];
    }
    
    printf("%f\n\n", c);

    system("pause");
    return 0;
}