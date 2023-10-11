#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codigo;
    

    printf("-------------- MENU --------------");
    printf("1 | Picanha        | R$ 25,00\n");
    printf("2 | Lasanha        | R$ 20,00\n");
    printf("3 | Strogonoff     | R$ 18,00\n");
    printf("4 | Bife acebolado | R$ 15,00\n");
    printf("5 | Hamburguer     | R$ 5,00\n");
    printf("------------- FIM ---------------\n");
    printf("Digite o codigo da opcao desejada\n");
    scanf("%d", &codigo);

    switch (codigo)
        {
            case 1:
            printf("Picanha | R$ 25.00");
            break;
            case 2: 
            printf("Lasanha | R$ 20.00");
            break;
            case 3:
            printf("Strogonoff | R$ 18.00");
            break;
            case 4: 
            printf("Bife acebolado | R$ 15.00");
            break;
            case 5: 
            printf("Hamburguer | R$ 5.00");
            break;
            default:
            printf("Operacao incorreta");
        }

    return 0;
}