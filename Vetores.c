#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale (LC_ALL,"portuguese");

  int vet[5];

  printf("Digite o primeiro numero: ");
  scanf("%d", &vet[0]);

  printf("Digite o segundo numero: ");
  scanf("%d", &vet[1]);

  printf("Digite o terceiro numero: ");
  scanf("%d", &vet[2]);

   printf("Digite o quarto numero: ");
  scanf("%d", &vet[3]);

   printf("Digite o quinto numero: ");
  scanf("%d", &vet[4]);



  printf("\nExibindo dados \n");

  printf("1º número: %d \n", vet[0]);
  printf("2º número: %d \n", vet[1]);
  printf("3º número: %d \n", vet[2]);
  printf("4º número: %d \n", vet[3]);
  printf("5º número: %d \n", vet[4]);

  return 0;
}