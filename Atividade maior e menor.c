#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf("Digite um numero:");
    scanf("%d", &numero);

    if (numero == 10)
    {
        printf("igual a 10!");
    }
    else if (numero > 10)
    {
        printf("maior que 10!");
    }
    else
    {
        printf("menor que 10!");
    }

    return 0;
}