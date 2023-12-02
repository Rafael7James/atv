#include <stdio.h>
#include <stdlib.h>

int main()
{

    struct dados_aluno
    {
        char Nome[200];
        int idade;
        float notas[2];
        float media;
    };

    struct dados_aluno aluno[3];

    int i, j;
    float somanotas = 0;
    for (i = 0; i < 3; i++)
    {
        printf("Digite o seu nome: ");
        gets(aluno[i].Nome);

        printf("\nDigite a sua idade: ");
        scanf("%d", &aluno[i].idade);

        for (j = 0; j < 2; j++)
        {
            printf("\nDigite a sua nota: ");
            scanf("%d", &aluno[j].notas);

            somanotas += aluno[i].notas[j];
        }
        aluno[i].media = somanotas / 2;
        somanotas = 0;
        fflush(stdin);
    }

    printf("\nSeus dados são...");
    for (i = 0; i < 3; i++)
    {
        printf("Nome: %s\n", aluno[i].Nome, i + 1);
        printf("Idade: %d\n", aluno[i].idade, i + 1);

        for (j = 0; j < 2; j++)
            ;
        {
            printf("%d nota:%.1f", aluno[i].notas[j]);
        }
        printf("Media: %.1f \n", aluno[i].media);
    }

    return 0;
}
