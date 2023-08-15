#include <stdio.h>

int main() {
  float x;
  printf("digite um valor: ");
  scanf("%f", &x);

  if (x <= 3) {
    printf("o valor inserido é %.2f", x);
  }

}