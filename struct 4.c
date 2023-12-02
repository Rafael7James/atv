#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "portuguese");
    struct dados_alunos
    {
        char nome[200];
        int idade;
        float media;
        int nota[2];
    };

struct dados_professor
{
    char Nome[200];
    char disc[2][200];
    char turma[2][200];
};

    struct dados_alunos a[3];
    struct dados_professor b[2];
    
    int i, j;
    int somaNotas = 0;

    for (i = 0; i < 3; i++)
    {

        printf("\nDigite o nome do %dº aluno:", i + 1);
        gets(a[i].nome);

        printf("Digite a idade do %d° aluno:", i + 1);
        scanf("%d", &a[i].idade);

        for (j = 0; j < 2; j++)
        {

            printf("Digite sua %dº nota:", j + 1);
            scanf("%d", &a[i].nota[j]);

            somaNotas += a[i].nota[j];
        }
        a[i].media = somaNotas / j;
        somaNotas = 0;

        fflush(stdin);
    }

for ( i = 0; i < 3; i++)
{
    printf("Digite o seu Nome: ");
    gets(b[i].Nome);

    printf("Digite a disciplina: ");
    gets(b[i].disc);

    printf("Digite a turma: ")
}

    printf("\nDADOS DIGITADOS.....\n");
    for (i = 0; i < 3; i++)
    {

        printf("\nNome do aluno:%s", a[i].nome, i + 1);
        printf("\nIdade do aluno:%d", a[i].idade, i + 1);

        for (j = 0; j < 2; j++)
        {

            printf("\nnotas do aluno :%d", a[i].nota[j]);
        }
        printf("\nMedia do aluno:%.1f\n", a[i].media);
    }

    if (a[j].idade < 7)
    {
        printf("Aprovado!!!");
    }
    else
    {
        printf("Reprovado!!!");
    }

    return 0;
}