#include <stdio.h>
#include <stdlib.h>

int main(){

float nota1;
float nota2;
float media;


printf("Digite a primeira nota: ");
scanf("%f" , &nota1);

printf("Digite a segunda nota: ");
scanf("%f" , &nota2);
fflush(stdin);
system("cls");

media = (nota1 + nota2) / 2;

printf("nota1: %.1f \n", nota1);
printf("nota2: %.1f \n", nota2);
printf("media: %.1f \n", media);

if (media >= 7)
{
    printf("Aprovado!");
}
else
{
    printf("Reprovado!");
}

return 0;
}