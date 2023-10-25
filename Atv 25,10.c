#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i; // quantidade
    int nota;
    int soma = 0;
    float media;

    do
    {
        printf("Digite a %dº nota: ", i + 1);
        scanf("%d", &nota);

        if (nota > 0)
        {
            soma += nota;
            i++; // quantidade
        }

    } while (nota > 0);

    media = soma / i;
    printf("\nmedia: %.1f \n", media);

    for (i = 0; i >= 0; i++)
    {
    }
    if (nota >= 0)

        return 0;
}