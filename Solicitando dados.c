#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declaramdp variáveis.
    int idade;
    float peso;
    char sexo;
    // solicitando dados do usuário.
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite seu peso: ");
    scanf("%f", &peso);

   fflush(stdin); //Limpando o cache 
    
    printf("Digite seu sexo: ");
    scanf("%c", &sexo);

    system("cls"); //Limpa tela

    // Exibindo dados do usuário.
    printf("Idade: %d anos.\n", idade);
    printf("Idade: %f Kg.\n", peso); 
    printf("Sexo: %c \n", sexo);
    return 0;
}