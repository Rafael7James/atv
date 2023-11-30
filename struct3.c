#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
int i;

struct dados_livro
{
char nomelivro[200];
char Autor[200];
char categoria[200];
int preco; 
};

struct dados_livro livro[3];
for ( i = 0; i < 3; i++)
{
printf("\nDigite o nome do livro: \n");
gets(livro[i].nomelivro);

printf("\nDigite o nome do Autor: \n");
gets(livro[i].Autor);

printf("\nDigite a categoria do livro: \n");
gets(livro[i].categoria);

printf("\nDigite o preço do livro: \n");
scanf("%d", &livro[i].preco);
fflush(stdin);
}

for ( i = 0; i < 3; i++)
{
printf("Seu Livro é: %s\n ", livro[i].nomelivro, i + 1);
printf("O autor do livro: %s\n", livro[i].Autor, i + 1);
printf("Categoria: %s\n", livro[i].categoria, i + 1);
printf("Preço do livro: %d\n", livro[i].preco, i + 1);
}

return 0;
}