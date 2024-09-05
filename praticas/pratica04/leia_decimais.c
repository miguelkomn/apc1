#include <stdio.h>

int main(void)
{
  float preco;

  printf("Digite um preço: ");
  scanf("%f", &preco);

  printf("Você digitou: %.2f\n", preco);

  double fracao;

  printf("Digite uma fração: ");
  scanf("%lf", &fracao);

  printf("Você digitou: %.10lf\n", fracao);
  
return 0;
}