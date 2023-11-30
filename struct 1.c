#include <stdio.h>
#include <string.h>
int main()
{
struct dados_pessoa
{
    char nome[200];
    int idade;
    float peso;
    float altura;
};

    struct dados_pessoa pessoa;

    printf("Digite o seu nome: ");
    gets(pessoa.nome);

    printf("Digite a sua idade: ");
    scanf("%d", &pessoa.idade);

    printf("Digite o seu peso: ");
    scanf("%f", &pessoa.peso);

    printf("Digite sua altura: ");
    scanf("%f", &pessoa.altura);
    
    printf("Exibindo dados... \n\n");
  

    printf("Seu nome: %s\n", pessoa.nome);
    printf("Sua idade: %d\n", pessoa.idade);
    printf("Seu Peso: %.1f\n", pessoa.peso);
    printf("Sua altura: %.1f\n", pessoa.altura);

    return 0;
}