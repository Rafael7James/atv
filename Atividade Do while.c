#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    float nota1, nota2, media;
    do
    {
        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);
    } while (nota1 < 0 || nota1 > 10);

    printf("Nota: %1.f \n", nota1);

    do
    {
        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);
    } while (nota2 < 0 || nota2 > 10);

    printf("Nota: %1.f \n", nota2);

    media = nota1 + nota2 / 2;

    printf("nota1: %.1f \n", nota1);
    printf("nota2: %.1f \n", nota2);
    printf("media: %.1f \n", media);

    return 0;
}