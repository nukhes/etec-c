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
    
    //abc
    if (a<b && b<c) {
        printf("%i, %i, %i", a, b, c);
    } else if (b<a && a<c) { //bac
        
    }
    
    return 0;
}
