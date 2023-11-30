#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "portuguese");
    struct dados_pessoa
    {
        char Nome[200];
        int Idade;
        char Moradia[200];
    };

    struct dados_pessoa pessoa;

    printf("Digite o seu nome: ");
    gets(pessoa.Nome);

    printf("Digite a sua idade: ");
    scanf("%d", &pessoa.Idade);

    printf("Digite seu endereço: ");
    gets(pessoa.Moradia);
    
    printf("\n\nMostrando dados...\n\n");

    printf("Seu nome: %s\n", pessoa.Nome);
    printf("Sua idade: %d\n", pessoa.Idade);
    printf("Seu endereço: %s\n", pessoa.Moradia);

    return 0;
}