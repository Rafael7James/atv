#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL,"portuguese");

  int numero1, numero2, numero3;
  int maior, menor;
  

    printf("Digite o primeiro numero:");
    scanf("%d" , &numero1);

    printf("Digite o segundo numero:");
    scanf("%d" ,&numero2);

    printf("digite o terceiro numero:");
    scanf("%d" ,&numero3);

    //Operação ternária
    maior = numero1 > numero2 ? numero1 : numero2;
    maior = maior > numero3 ? maior  : numero3;

    menor = numero1 < numero2 ? numero1 : numero2;
    menor = menor < numero3 ? menor : numero3;

    printf("\nMaior numero: %d", maior);
    printf("Menor numero: %d \n", menor);


    return 0;
}