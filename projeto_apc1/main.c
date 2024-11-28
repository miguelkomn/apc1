#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>

// Constantes do jogo
#define LISTSIZE 1000
#define EXACT 2
#define CLOSE 1
#define WRONG 0

// Códigos ANSI para cores
#define GREEN   "\e[38;2;255;255;255;1m\e[48;2;106;170;100;1m"
#define YELLOW  "\e[38;2;255;255;255;1m\e[48;2;201;180;88;1m"
#define RED     "\e[38;2;255;255;255;1m\e[48;2;220;20;60;1m"
#define RESET   "\e[0;39m"

int main(int argc, char *argv[])
{
    // Verificar uso correto
    if (argc != 2)
    {
        printf("Usage: ./wordle wordsize\n");
        return 1;
    }

    // Validar o tamanho da palavra
    int wordsize = 0;
    if (argv[1][0] < '5' || argv[1][0] > '8')
    {
        printf("Error: wordsize must be either 5, 6, 7, or 8\n");
        return 1;
    }
    else
    {
        wordsize = argv[1][0] - '0';
    }

    // Abrir arquivo de palavras
    char wl_filename[6];
    sprintf(wl_filename, "%i.txt", wordsize);
    FILE *wordlist = fopen(wl_filename, "r");
    if (wordlist == NULL)
    {
        printf("Error opening file %s.\n", wl_filename);
        return 1;
    }

    // Carregar palavras do arquivo
    char options[LISTSIZE][wordsize + 1];
    for (int i = 0; i < LISTSIZE; i++)
    {
        fscanf(wordlist, "%s", options[i]);
    }
    fclose(wordlist);

    // Escolher palavra aleatória
    srand(time(NULL));
    char *choice = options[rand() % LISTSIZE];

    // Configurar o jogo
    int guesses = wordsize + 1;
    bool won = false;

    printf(GREEN"This is WORDLE"RESET"\n");
    printf("You have %i tries to guess the %i-letter word I'm thinking of\n", guesses, wordsize);

    // Loop principal do jogo
    for (int i = 0; i < guesses; i++)
    {
        // Obter o palpite do usuário
        char guess[9]; // Tamanho máximo permitido (8 letras + terminador nulo)
        printf("Input a word of %d letters in lowercase: ", wordsize);

        while (true)
        {
            scanf("%s", guess);
            if (strlen(guess) == wordsize)
            {
                break;
            }
            printf("Invalid input. Please input a word of %d letters: ", wordsize);
        }

        // Array de status e inicialização
        int status[wordsize];
        for (int k = 0; k < wordsize; k++)
        {
            status[k] = WRONG;
        }

        // Verificar o palpite
        int score = 0;
        for (int j = 0; j < wordsize; j++)
        {
            for (int k = 0; k < wordsize; k++)
            {
                if (guess[j] == choice[j])
                {
                    status[j] = EXACT;
                    score += 2;
                    break;
                }
                else if (guess[j] == choice[k])
                {
                    status[j] = CLOSE;
                    score += 1;
                }
            }
        }

        // Imprimir o palpite com cores
        printf("Guess %i: ", i + 1);
        for (int m = 0; m < wordsize; m++)
        {
            if (status[m] == EXACT)
            {
                printf(GREEN"%c"RESET"", guess[m]);
            }
            else if (status[m] == CLOSE)
            {
                printf(YELLOW"%c"RESET"", guess[m]);
            }
            else
            {
                printf(RED"%c"RESET"", guess[m]);
            }
        }
        printf("\n");

        // Verificar se o usuário acertou
        if (score == EXACT * wordsize)
        {
            won = true;
            break;
        }
    }

    // Resultado do jogo
    if (won)
    {
        printf("You won!\n");
    }
    else
    {
        printf("Oh, no! You didn't guess it :( . The word was %s.\n", choice);
    }

    return 0;
}
