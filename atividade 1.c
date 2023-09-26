#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade = 20;    // inteiro
    float peso = 80.2; // real
    char sexo = 'f';   // apenas um caracter
    char nome [200] = "Rafael"; //cadeia de caracteres
    
    printf("idade: %d anos. \n", idade);
    printf("Peso : %.2f kg. \n", peso);
    printf("Sexo: %c \n", sexo);
    printf("Nome: %s \n", nome);
    return 0;
}
