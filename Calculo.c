#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i;
    int numero;
    int pares = 0;
    int impares = 0;

    for (i = 1; i <= 5; i++)
    {
        printf("Digite o %d° numero:", i);
        scanf("%d", &numero);

        if(numero % 2 == 0);
        {
            pares++;
        }
         else{

            impares++;
        }

        return 0;
    }

}