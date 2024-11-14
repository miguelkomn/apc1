#include <stdio.h>

int main(void)
{
    int numero;
    int fatorial = 1;
    scanf("%i", &numero);

    for(int i=numero; i>0; i--) {
        fatorial = fatorial * i;
    }

    printf("%i %i", numero, fatorial);
}