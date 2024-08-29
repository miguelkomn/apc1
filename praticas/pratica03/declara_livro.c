#include <stdio.h>

int main(void)
{
  unsigned long int isbn = 1555;
  unsigned int num_paginas = 300;
  float preco = 320.99;
  unsigned int ano = 1960;

  printf("ISBN: %013lu\n", isbn);
  printf("Num. Paginas: %03i\n", num_paginas);
  printf("Preco: R$ %07.2f\n", preco);
  printf("Publicado em: %04i\n", ano);
  return 0;
}