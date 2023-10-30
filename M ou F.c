#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Letra;

    printf("Digite F ou M:");
    scanf("%c", &Letra);

    switch (Letra){
    case 'F':
    case 'f':

        printf("Feminino\n");
        break;

    case 'M':
    case 'm':
        printf("Masculino\n");
        break;

    default:
     printf("Sexo inválido\n");
       
    }

    return 0;
}