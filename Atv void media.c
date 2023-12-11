#include <stdio.h>
#include <locale.h>

#define max 3

float Vmedia(int notas[]){
int i;
float somanotas = 0;
float media;
for ( i = 0; i < max; i++)
{
somanotas += notas[i];
}

media = somanotas / i;
return media;
}

HUD(){
printf("==================================\n");
printf("\t SENAI");
printf("\n==================================\n");
}


Faxina(){
system("cls");
}

int main(){
setlocale(LC_ALL,"portuguese");
int notas[max];
int i;
float media;

HUD();
for ( i = 0; i < max; i++)
{
    printf("Digite a %dº nota: \n", i + 1);
    scanf("%d", &notas[i]);
}

media = Vmedia(notas);

printf("Sua média é: %.1f\n", media);

return 0;
}