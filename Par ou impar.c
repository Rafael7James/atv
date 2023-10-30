#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i;

printf("Par\n");
    for (i = 100; i <= 200; i += 2)
    {
        printf("%d \n", i);
    }
printf("\nImpar\n");
    {
        for (i = 101; i <= 200; i += 2)
            printf("%d \n", i);
    }
    return 0;
}