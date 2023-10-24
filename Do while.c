#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    float nota;

    do
    {
        printf("Digite uma nota: ");
        scanf("%f", &nota);
    } while (nota < 0 || nota > 10);

    printf("Nota: %1.f \n", nota);

    return 0;
}