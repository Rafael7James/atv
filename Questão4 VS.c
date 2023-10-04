#include <stdio.h>
#include <stdlib.h>

int main()
{
    float media;
    float nota1;
    float nota2;
    int soma;
    int produto;
    int maior;
    int menor;
    printf("Digite a nota1:");
    scanf("%f", &nota1);

    printf("Digite a nota2:");
    scanf("%f", &nota2);

    fflush(stdin);
    system("cls");

    media = (nota1 + nota2) / 2;
     printf("nota1: %.1f \n", nota1);
    printf("nota2: %.1f \n", nota2);
    printf("media: %.1f \n", media);
   
    soma = nota1 + nota2;
    printf("soma: %i \n", soma);

    produto = nota1 * nota2;
    printf("produto: %i \n", produto);

    if (nota1 > nota2)
{
        maior = nota1;
        menor = nota2;
    }
    else
    {
        maior = nota2;
        menor = nota1;
    }

printf("Menor numero: %d \n", menor);
printf("Maior numero: %d \n", maior);
    return 0;
}
