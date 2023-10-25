#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    int num;
    int pares = 0;
    int impares = 0;
    int quantgeral = 0;
    int somageral = 0;
    int somapares = 0;
    float mediageral = 0;
    float mediapares = 0;
    do
    {
        printf("Digite o %dº numero: ", quantgeral + 1);
        scanf("%d", &num);

        if (num > 0)
        {
            somageral += num;
            quantgeral++;

            if (num % 2 == 0)
            {
                somapares += num;
                pares++;
            }
            else
            {
                impares++;
            }
        }

    } while (num != 0);

    // cast
    mediageral = somageral / (float)quantgeral;
    mediapares = somapares / (float)pares;

    printf("Quantidade numeros pares; %d \n", pares);
    printf("Quantidade numeros impares: %d \n", impares);
    printf("Media de numeros pares: %.1f \n", mediapares);
    printf("Media Geral: %.1f \n", mediageral);

    return 0;
}