#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese");

int num1;
int num2;

printf("Digite o 1º numero:");
scanf("%d", &num1);

printf("Digite o 2º numero:");
scanf("%d", &num2);

if (num1 < num2){
printf("num2: %d \n", num2);
}
else
{
printf("num1: %d \n", num1);
}

return 0;
}