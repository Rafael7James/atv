#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    float nota;
    printf("Digite uma nota: ");
    scanf("%f", &nota);

    while (nota < 0 || nota > 10)
    {
        printf("Digite uma nota: ");
        scanf("%f", &nota);
    }
    printf("Nota: %.1f \n", nota);
    return 0;
}