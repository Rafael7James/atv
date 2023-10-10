#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){

int mes;
setlocale(LC_ALL, "portuguese");

printf("Digite um numero para um mes do ano:");
scanf("%d", &mes);

switch(mes){
case 1:
printf("Janeiro");
break;
case 2:
printf("Fevereiro");
break; 
case 3:
printf("Março");
break;
case 4:
printf("Abril");
break; 
case 5:
printf("Maio");
break; 
case 6:
printf("Junho");
break; 
case 7:
printf("Julho");
break;
case 8:
printf("Agosto");
break;
case 9:
printf("Setembro");
break;   
case 10:
printf("Outubro");
case 11:
break; 
case 12:
printf("Dezembro");
break; 

default:
printf("ta errado");

}


return 0;    

}