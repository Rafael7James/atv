#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int idade;
    char resultado;
    printf("Digite um numero: ");
    scanf("%d, &idade");

    idade >= 18 && idade <= 65 ? 
    strcpy(resultado, "Obrigado a votar!"):
    strcpy(resultado, "Não é obrigado a votar!");

    printf(resultado);
}
