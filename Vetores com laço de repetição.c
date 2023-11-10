#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "portuguese");

  int vet[4];
  int i;
  int tamanho = 4;
  int media;
  int soma;

      for (i = 0; i < tamanho; i++)
  {
    printf("Digite a %dº nota: ", i + 1);
    scanf("%d", &vet[i]);
    soma += vet[i];
    media = soma / tamanho;
  
  }
  printf("\nExibindo os dados.. \n");

  for (i = 0; i < tamanho; i++)
  {
    printf("%dº nota: %d \n", i + 1, vet[i]);
  }

  printf("media: %d\n", media);
  
  if (media >= 7)
  {
    printf("\nAprovado");
  }
  else if (media >= 5)
  {
    printf("\nRecuperação");
  }
  else if (media < 5)
  {
    printf("\nReprovado");
  }
   
  return 0;
}