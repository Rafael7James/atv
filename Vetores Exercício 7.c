#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
setlocale(LC_ALL, "portuguese");
    int num[5];
    int i;
    

    for (i = 0; i < 5; i++)
    {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &num[i]);

        if (num[i] <= 0)
        {
            num[i] = 0;
        }
    }

for ( i = 0; i < 5; i++)
{
printf("\nNumeros: %d\n", num[i]);
}

    return 0;
}