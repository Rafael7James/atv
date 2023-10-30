#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int numero, i, resultado;

    printf("Digite um numero:");
    scanf("%d", &numero);

    for (i = 0; i <= 10; i++)
    {
        resultado = numero * i;
        printf("%d x %d = %d\n", numero, i, resultado);
    }

    return 0;
}
