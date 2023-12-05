#include <stdio.h>

void interface()
{
    printf("\n==========================================\n");
    printf("\tTabuada\n");
    printf("\n==========================================\n");
}

void tabuada(int n1)
{
    int i;
    for (i = 1; i < 10; i++)
    {
        printf("%d x %d = %d \n", n1, i, n1 * i);
    }
}
int main()
{

    int numero;

    interface();
    printf("Digite um numero: ");
    scanf("%d", &numero);

    interface();
    tabuada(numero);

    return 0;
}
