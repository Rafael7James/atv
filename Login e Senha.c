#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
    
    setlocale(LC_ALL, "portuguese");
    
    char usuario_correto[] = "raffa"; // Usu�rio correto
    char senha_correta[] = "bahia";  // Senha correta
    char usuario_digitado[50];
    char senha_digitada[50];

    do {
        printf("Digite o nome de usu�rio: ");
        scanf("%s", usuario_digitado);

        printf("Digite a senha: ");
        scanf("%s", senha_digitada);

        if (strcmp(usuario_digitado, usuario_correto) == 0 && strcmp(senha_digitada, senha_correta) == 0) {
            printf("Login bem-sucedido!\n");
            break;
        } else {
            printf("Login ou senha inv�lidos. Tente novamente.\n");
        }
    } while (1);

return 0;
}