#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){


    setlocale(LC_ALL, "Portuguese");

    int numero;
    
    printf("Digite um numero:");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("%d par.\n", numero);
    }
    else {
        printf("%d impar.\n", numero);

    return 0;
}

}