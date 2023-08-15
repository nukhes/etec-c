// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a,b,c;
    
    printf("escreva um numero: ");
    scanf("%i", &a);
    
    printf("escreva um numero: ");
    scanf("%i", &b);
    
    printf("escreva um numero: ");
    scanf("%i", &c);
    
    if (a < b && a < c) {
        if (b < c) {
            printf("%i, %i, %i", a,b,c);
        } else {
            printf("%i, %i, %i", a,c,b);
        }
    } else if (b < a && b < c) {
        if (a < c) {
            printf("%i, %i, %i", b,a,c);
        } else {
            printf("%i, %i, %i", b,c,a);
        }
    } else if (c < b && c < a) {
        if (b < a) {
            printf("%i, %i, %i", c,b,a);
        } else {
            printf("%i, %i, %i", c,a,b);
        }
    }
    
    return 0;
}
