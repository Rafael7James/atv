#include <stdio.h>
#include <stdlib.h>

int main()
{

    char sexo;
    float peso;
    float altura;

    printf("Qual o seu sexo?:");
    scanf("%c", &sexo);

    printf("Qual a sua altura:");
    scanf("%f", &altura);

    switch (sexo)
    {
    case 'M':
        peso = (72.7 * altura) - 58;
        printf("peso: %.1f \n", peso);
        break;

    case 'F':
        peso = (62.1 * altura) - 44.7;
        printf("peso: %.1f \n", peso);
        break;

    default:
        printf("Ta errado");
        break;
    }

    return 0;
}