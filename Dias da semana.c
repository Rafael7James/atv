#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

int Diadasemana;
setlocale (LC_ALL, "portuguese");

printf("Digite um numero de um dia da semana:");
scanf("%d", &Diadasemana);

switch(Diadasemana){

case 2:
case 3:
case 4:
case 5:
printf("Dia util");
break;
case 1:
case 7:
printf("final de semana");
break;
default:
printf("ta errado");
}

return 0;
}