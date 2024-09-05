#include <stdio.h>

int main(void)
{
  char produto[21];
  int quantidade;
  float valor;

  printf("Digite, nessa ordem, uma quantidade, um preço e o nome do produto: ");
  scanf("%i %f %[^\n]s", &quantidade, &valor, produto);

  printf("==============================\n");
  printf("            PEDIDO            \n");
  printf("==============================\n");
  printf("Produto\tQtd\tValor Unit\n");
  printf("%s\t%02i\t%.2f\n", produto, quantidade, valor);
  printf("==============================\n");

  return 0;
}