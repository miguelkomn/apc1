#include <stdio.h>

int main(void)
{
    int nota = 0;

    printf("Entre com uma nota de 1 a 5: ");
    scanf("%i", &nota);

    // if (nota == 1)
    // {
    //     printf("Voce ganhou uma estrela!\n");
    // }
    // else if (nota ==2)
    // {
    //     printf("Voce ganhou 2 estrelas!\n");
    // }


    switch(nota)
    {
        case 1:
        printf("Voce ganhou uma estrela!\n");
        break;

        case 2:
        printf("Voce ganhou 2 estrelas!\n");
        break;

        default:
        printf("nota invalida\n");
    }

    return 0;
}