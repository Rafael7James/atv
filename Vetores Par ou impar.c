#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "portuguese");

int num[6];
int i;
int pares, impares;


for ( i = 0; i < 6; i++)
{
  printf("Digite o %d� numero: ", i + 1);
 scanf("%d", &num[i]);
}

if (num[i] % 2 == 0){
pares++;
}else{
impares++;
}
printf("\nNumeros digitados...\n");

for ( i = 0; i < 6; i++)
{
printf("N�meros: %d \n", num[i]);
}

printf("\nQuantidade de n�meros pares: %d\n", pares);
printf("\nQuantidade de n�meros impares: %d\n", impares);

return 0;
}