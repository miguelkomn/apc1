#include <stdio.h>
#include <string.h>

int main(void)
{
    char frase[31];
    scanf("%s", frase);

    while(getchar() != '\n');
    
    char letra;
    scanf("%c", &letra);

    int quantidade = 0;

    for(int i = 0; i < strlen(frase); i++)
    {
        if (frase[i] == letra)
        {
            quantidade++;
        }
    }

    if(quantidade > 0)
    {
        printf("%i", quantidade);
    }
    else
    {
        printf("A frase nao contem a letra!");
    }

    return 0;
}