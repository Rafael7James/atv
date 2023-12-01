#include <stdio.h>
#include <stdlib.h>

int main()
{

    struct Dados_pessoa
    {
        char Nome[200];
        int Bday;
        int RG;
        int CPF;
    };

    int i;
    struct Dados_pessoa pessoa[5];
    {
        for (i = 0; i < 5; i++)
        {
            printf("Digite o seu nome: \n\n");
            gets(pessoa[i].Nome);
            printf("Digite sua data de nascimento: \n\n");
            scanf("%d", &pessoa[i].Bday);
            printf("Digite o seu RG: \n\n");
            scanf("%d", &pessoa[i].RG);
            printf("Digite o seu CPF: \n\n");
            scanf("%d", &pessoa[i].CPF);
        fflush(stdin);
        }

        for (i = 0; i < 5; i++)
        {
            printf("Seu nome é: %s\n", pessoa[i].Nome, i + 1);
            printf("Sua data de nascimento: %s\n", pessoa[i].Nome, i + 1);
            printf("Seu Rg: %d\n", pessoa[i].RG, i + 1);
            printf("Seu CPF: %d\n", pessoa[i].CPF, i + 1);
        }

    }
        return 0;
}