#include <stdio.h>
#include <locale.h>
struct dados_aluno {
    char nome[200];
    int idade;
    float notas[2];
    float media;
};

int main() {
 setlocale(LC_ALL, "Portuguese");   
    struct dados_aluno aluno[2];
    int i, j;
    float somaNotas = 0;
   
    for (i =0; i < 2; i++) {
        printf("\nDigite os dados do %d� aluno: ", i + 1);
        printf("\nNome: ");
        gets(aluno[i].nome);
       
        printf("Idade: ");
        scanf("%d",&aluno[i].idade);
   
        for (j =0; j < 2; j++) {    
            printf("%d� nota: ", j + 1);
            scanf("%d",&aluno[i].notas[j]);
           
            somaNotas = aluno[i].notas[j];
        }
       
        aluno[i].media = somaNotas / j;
        somaNotas = 0;
    }
   
    printf("\nExibindo dados dos alunos... \n ");
   
    for (i =0; i < 2; i++) {
        printf("\nDados do %d� aluno: ", i + 1);
        printf("Nome: %s \n", aluno[i].nome);
        printf("Nome: %d \n", aluno[i].idade);
       
        for (j =0; j < 2; j++) {
            printf("%d� nota: %.2f \n", j + 1, aluno[i].notas[j]);
        }
       
        printf("Media: %.2f \n", aluno[i].media);
    }
   
    return 0;
}