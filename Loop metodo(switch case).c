#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i;

    // i= i + 1
    // i++

    // i+=2 Pulando de 2 em 2 +
    // i-=2 Pulando de 2 em 2 -

    printf("Digite um numero:");
    scanf("%d", &i);

    switch (i)
    {
    case 1:
        for (i = 1; i <= 10; i++)
            printf("1 x %d = %d \n", i, 1 * i);
        break;
    case 2:
        for (i = 1; i <= 10; i++)
            printf("2 x %d = %d \n", i, 2 * i);
        break;
    case 3:
        for (i = 1; i <= 10; i++)
            printf("3 x %d = %d \n", i, 3 * i);
        break;
    case 4:
        for (i = 1; i <= 10; i++)
            printf("4 x %d = %d \n", i, 4 * i);
        break;
    case 5:
        for (i = 1; i <= 10; i++)
            printf("5 x %d = %d \n", i, 5 * i);
        break;
    case 6:
        for (i = 1; i <= 10; i++)
            printf("6 x %d = %d \n", i, 6 * i);
        break;
    case 7:
        for (i = 1; i <= 10; i++)
            printf("7 x %d = %d \n", i, 7 * i);
        break;
    case 8:
        for (i = 1; i <= 10; i++)
            printf("8 x %d = %d \n", i, 8 * i);
        break;
    case 9:
        for (i = 1; i <= 10; i++)
            printf("9 x %d = %d \n", i, 9 * i);
        break;
    case 10:
        for (i = 1; i <= 10; i++)
            printf("10 x %d = %d \n", i, 10 * i);
        break;
    }

    return 0;
}