#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
 setlocale(LC_ALL, "portuguese");

 int idade, anostrab, codigo, nascimento;
 
 printf("Digite o seu codigo:");
 scanf("%d", &codigo);

 printf("Digite o ano do seu nascimento:");
 scanf("%d", &nascimento);
 
 printf("Digite o tempo de trabalho em anos:");
 scanf("%d", &anostrab);

 idade = 2023 - nascimento;
 
if (idade >= 65 || anostrab >= 30)
{
printf("Aposentadoria Aprovada.");    
}else{
printf("Aposentadoria Negada.");
}
 return 0;   
}