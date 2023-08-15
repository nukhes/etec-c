#include <stdio.h>

int main() {
  char nome[100], sexo[100];

  printf("digite seu nome: ");
  scanf("%s", &nome);
  printf("digite de acordo com seu sexo\n\nMASCULINO: M\nFEMININO: F\n: ");
  scanf("%s", &sexo);

  if (strncmp(sexo, "M", 1) == 0) {
    printf("llmo Sr. %s", nome);
  } else {
    printf("llma Sra. %s", nome);
  }

}