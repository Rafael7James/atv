#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portugese");

    float M;
    float Cm;

    printf("Insira a metragem: ");
    scanf("%f", &M);

    Cm = M / 100;

    system("cls");

    printf("Metros: %.1f \n", M);
    printf("Cm: %.f \n", Cm);

    return 0;
}