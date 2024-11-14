#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char string[11], maiusculo[11], minusculo[11];

    scanf("%s", string);

    memset(maiusculo, '\0', strlen(maiusculo));
    memset(minusculo, '\0', strlen(minusculo));

    for(int i=0; i<strlen(string); i++)
    {
        maiusculo[i] = toupper(string[i]);
        minusculo[i] = tolower(string[i]);
    }

    printf("%s\n%s\n", maiusculo, minusculo);

    return 0;
}