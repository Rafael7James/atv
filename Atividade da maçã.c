#include <stdio.h>
#include <stdlib.h>

int main() {
int numerodemacas;
float precounitario, precofinal;

printf("Quantas macas voce quer?:");
scanf("%d", &numerodemacas);

precounitario = numerodemacas <  12 ? 1.30 : 1.0;
precofinal = numerodemacas * precounitario;

printf("Preco final: R$ %.2f \n", precofinal);
return 0;
}