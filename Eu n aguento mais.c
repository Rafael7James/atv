#include <stdio.h>
#include <stdlib.h>

int apares(int num[]){
int i, pares = 0;
for ( i = 0; i < 6; i++)
{
    if (num[i] % 2 == 0)
    {
    pares++;
    }
    
}
return pares;
}

int impar(int num[])
{

int i,impares = 0 ;

for ( i = 0; i < 6; i++)
{
    if (num[i] % 2 == 1)
    {
        impares++;
    }
    return impares;
}
}

int main(){

int num[6];
int pares;
int impares;
int j;

for ( j = 0; j < 6; j++)
{
    printf("Digite os números: ");
    scanf("%d", &num[j]);
}
pares = par(num);
impares = impar(num);

printf("\nQuantidade de pares: %d\n", pares);
printf("\nQuantidade de impares: %d\n", impares);

return 0;
}
