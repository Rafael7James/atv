#include <stdio.h>
#include <locale.h>

struct dados_funcionario
{
    char Nome[200];
    float Bday;
    int Matricula;
    char lugar[200];
};

struct dados_cliente
{
    char Nome[200];
    int Bday;
    char lugar[200];
};

int main(){

setlocale(LC_ALL, "portuguese" );
struct dados_funcionario F;
struct dados_cliente C;

int i,j;
printf("FUNCION�RIO\n");

printf("Digite seu nome: ");
gets(F.Nome);

printf("Digite sua data de nascimento: ");
scanf("%d", &F.Bday);

fflush(stdin); 

printf("Digite o seu endere�o: ");
gets(F.lugar);

printf("Digite a sua Matr�cula: ");
scanf("%d", &F.Matricula);
fflush(stdin);

printf("\nCliente\n");

printf("Digite seu nome: ");
gets(C.Nome);

printf("Digite o seu endere�o: ");
scanf("%s", &C.lugar);

printf("Digite sua data de nascimento: ");
scanf("%d", &C.Bday);

fflush(stdin);
system("cls");
printf("Exibindo dados na tela.......");

printf("\nFuncion�rio\n\n");
printf("Seu nome: %s\n", F.Nome);
printf("Sua data de nascimento: %d\n", F.Bday);
printf("Sua matr�cula: %d\n", F.Matricula);
printf("Seu Endere�o: %s\n", F.lugar);

printf("\n\nCliente\n\n");
printf("Seu nome: %s\n", C.Nome);
printf("Sua idade: %d\n", C.Bday);
printf("Seu endere�o: %s\n", C.lugar);

return 0;
}


