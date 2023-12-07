#include <stdio.h>
#include <locale.h>

int conversor(int m){

return m * 100;
}

int main(){
setlocale(LC_ALL, "portuguese");

float m;

printf("Digite os metros para a conversão: ");
scanf("%f", &m);

conversor(m);
printf("O valor em centímetros é: %f\n", m);


return 0;
}