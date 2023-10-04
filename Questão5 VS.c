#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
    
int main (){
setlocale (LC_ALL, "portuguese");
char loginsalvo[200]= "Messi";
char senhasalva[200]= "Neymar";
char login[200];
char senha[200];

printf("Digite seu login: ");
gets (login);

printf("Digite a senha: ");
gets (senha);

if (strcmp(login, loginsalvo)  == 0 && strcmp(senha, senhasalva) == 0){
    printf("Bem-vindo!");
}else{
    printf("Acesso negado!");
}
return 0;
}