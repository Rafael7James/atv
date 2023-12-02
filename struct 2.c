#include <stdio.h>
#include <locale.h>

struct dados_funcionario
{
    char Nome[200];
    int idade;
    int CPF;
};

struct dados_cliente
{
    char Nome[200];
    int Idade;
    int CPF;
};

int main(){
setlocale(LC_ALL, "portuguese" );
struct dados_funcionario F;
struct dados_cliente C;

int i,j;
printf("FUNCIONÁRIO\n");

printf("Digite seu nome: ");
gets(F.Nome);

printf("Digite sua idade: ");
scanf("%d", &F.idade);

printf("Digite seu CPF: ");
scanf("%d", &F.CPF);
fflush(stdin);
printf("\nCliente\n");

printf("Digite seu nome: ");
gets(C.Nome);

printf("Digite sua idade: ");
scanf("%d", &C.Idade);

printf("Digite seu CPF: ");
scanf("%d", &C.CPF);
fflush(stdin);
system("cls");
printf("Exibindo dados na tela.......");

printf("\nFuncionário\n\n");
printf("Seu nome: %s\n", F.Nome);
printf("Sua idade: %d\n", F.idade);
printf("Seu CPF: %d\n", F.Nome);

printf("\n\nCliente\n\n");
printf("Seu nome: %s\n", C.Nome);
printf("Sua idade: %d\n", C.Idade);
printf("Seu CPF: %d\n", C.CPF);

return 0;
}