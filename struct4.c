#include <stdio.h>
#include <locale.h>

int main(){

struct dados_alunos
{
char Nome[200];
int Idade;
float Notas;
};

 int i, j;
struct dados_alunos alunos[3];
for (i = 0; i < 3; i++)
{
printf("Digite o nome do aluno: ");
gets(alunos[i].Nome);

printf("Digite sua idade: ");
scanf("%d", alunos[i].Idade);

for ( j = 0; i < 2; j++)
{
    printf("Digite uma nota: ");
    scanf("%f", &alunos[j].Notas);
}

}













return 0;
}