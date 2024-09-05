#include <stdio.h>

int main(void)
{
  int matricula;
  float a1, a2, media;
  
  printf("Digite, nessa ordem, um numero de matricula contendo 8 digitos, uma nota a1, uma nota a2: ");
  scanf("%i %f %f", &matricula, &a1, &a2);

  media = (a1 + a2) / 2;

  printf("Matricula\tA1\tA2\tMedia\n");
  printf("%8i\t%.1f\t%.1f\t%.1f\n", matricula, a1, a2, media);

  return 0;
}