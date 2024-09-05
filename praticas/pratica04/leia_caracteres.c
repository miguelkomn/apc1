#include <stdio.h>

int main(void)
{
  char tecla;

  printf("Digite uma tecla: ");
  scanf("%c", &tecla);

  printf("Você digitou: %c\n", tecla);

  char nome[31];

  printf("Digite seu nome: ");
  scanf("%[^\n]s", nome);

  printf("Você digitou: %s\n", nome);
  
  return 0;
}