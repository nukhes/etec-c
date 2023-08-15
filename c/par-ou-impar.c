#include <stdio.h>

int main() {
  int a;
  printf("escreva um valor ");
  scanf("%i", &a);

  if (a % 2 == 0) {
    printf("este numero e par");
  } else {
    printf("este numero é impar");
  }
}