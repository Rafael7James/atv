#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char banda[3][200];
    char integrantes[3][5][200];
    int i, j = 0;

    for (i = 0; i < 3; i++)
    {

        printf("\n\nDigite o nome da %d� banda:  ", i + 1);
        gets(banda[i]);

        for (j = 0; j < 5; j++)
        {
            printf("\n\nDigite o nome do %d� integrante da banda: ", j + 1);
            gets(integrantes[j]);
        }
    }

    system("cls");

    for (i = 0; i < 3; i++)
    {
        printf("As bandas s�o: %s\n", banda[i]);

        for (j = 0; j < 5; j++)

        {
            printf("Os integrantes s�o: %s\n", integrantes[j]);
        }
    }

    return 0;
}