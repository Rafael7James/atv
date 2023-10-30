#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
setlocale(LC_ALL, "portuguese");

int i = 0;
float nota [4];
float media = 0;

for ( i = 0; i < 4; i++)
{
    printf("Informe a nota:", i + 1);
    scanf("%f", &nota[i]);
}

for ( i = 0; i < 4; i++)
{
    media += nota[i];
}
 media /= 4;

printf("Sua media é: %.1f \n", media);
return 0;    
}