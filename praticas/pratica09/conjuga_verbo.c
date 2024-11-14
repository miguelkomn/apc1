#include <stdio.h>
#include <string.h>

int main(void)
{
    char pronomes[6][5] = {"EU", "TU", "ELE", "NOS", "VOS", "ELES"};
    char pronomes[6][5] = {"O", "AS", "A", "AMOS", "AIS", "AM"};
    char verbo[21];

    scanf("%s", verbo);
    
    int ultima_posicao = strlen(verbo) - 1;
    int penultima_posicao = ultima_posicao - 1;

    if (verbo[penultima_posicao] == 'A' && verbo[ultima_posicao] == 'R') 
    {
        char radical[21];
        strcopy(verbo, radical);
        radical[penultima_posicao] = '\0';

        for (int i = 0; i < 5; i++)
        {
            printf("%s %s%s\n", pronomes[i], radical, sufixos[i]);
        }
    }
    else
    {
        printf("O verbo nao termina em  AR!");
    }


}