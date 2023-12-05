#include <stdio.h>
#include <stdlib.h>

void gta6()
{
    printf("\n==========================================\n");
    printf("\tGRAND THEFT AUTO IV\n");
    printf("\n==========================================\n");
}

void faxina()
{
    fflush(stdin);
    system("cls");
}

void MostrarIdade(int idade)
{
    printf("Idade: %d\n", idade);
}

void mostrarNome(char nome[200])
{
    printf("Nome: %s\n", nome);
}

int main()
{

    char nome[200];
    int idade;

    gta6();

    printf("Digite um nome: ");
    gets(nome);
    faxina();

    gta6();
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    faxina();

    gta6();
    mostrarNome(nome);
    MostrarIdade(idade);

    return 0;
}