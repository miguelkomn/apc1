#include <stdio.h>
#include <string.h>

int main(void)
{
    char nomes[10][101];

    for(int i=0; i<10; i++) 
    {
        scanf("%s", nomes[i]);
    }

    char sobrenome[11];

    int achou = 0;

    for(int i = 0; i < 9; i++)
    {
        if (strstr(nomes[i], sobrenome))
        {
            printf("%s\n", nomes[i]);
            achou = 1;
        }
    }

    if(achou == 0)
    {
        printf("Nenhum nome tem o sobrenome!");
    }

    return 0;
}