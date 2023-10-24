#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){


float nota;

printf("Digite uma nota:");
scanf("%f", &nota);

while (nota < 0 || nota > 10){
printf("Digite uma nota: ");
scanf("%f", &nota);
}
printf("nota: %.1f \n", nota);

return 0;
}