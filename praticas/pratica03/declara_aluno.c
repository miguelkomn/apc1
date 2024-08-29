#include <stdio.h>

int main(void)
{
  unsigned int matricula = 0;
  unsigned int idade = 99;
  float altura = 9.90;
  float peso = 999;
  char sexo = 'F';

  printf("Matricula: %08i\n", matricula);
  printf("Idade: %i anos\n", idade);
  printf("Altura: %.2f m\n", altura);
  printf("Peso: %.1f kg\n", peso);
  printf("Sexo: %c\n", sexo);
  return 0;
}