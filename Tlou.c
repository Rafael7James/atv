#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void tlou()
{
    printf("\n==========================================\n");
    printf("\tThe Last of Us\n");
    printf("\n==========================================\n");
}

int media(int n1, int n2)
{
    float resultado = n1 + n2 / 2;
    return resultado;
}

int main(){

    int num1;
    int num2;
    float media;

    tlou();

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    media = dividir(num1, num2);

    tlou();
    printf("Primeiro numero: %d \n", num1);
    printf("Segundo numero: %d \n", num2);
    printf("Sua media: %f \n", media);
    return 0;


}