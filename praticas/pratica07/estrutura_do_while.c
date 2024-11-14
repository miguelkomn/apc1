#include <stdio.h>

int main(void)
{
    int nota;

    do {
        scanf("%i", &nota);
        if(nota < 1 || nota > 10) {
            printf("Nota invalida. Tente novamente!\n");
        }
    } while(nota < 1 || nota > 10);

}