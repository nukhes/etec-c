#include <stdio.h>

int main() {
  float x;
  printf("digite um valor entre 1 e 9: ");
  scanf("%f", &x);

  if (x >= 1 && x <= 9) {
    printf("este valor é permitido");
  } else {
    printf("este valor não é permitido");
  }

}