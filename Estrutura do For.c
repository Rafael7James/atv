#include <stdio.h>
#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int num[2];
    int i = 0;

    for (i = 0; i < 2; i++)
    {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &num[i]);
    }
    

    return 0;
}