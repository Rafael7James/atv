#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i;
    
printf("Par\n");
    for (i = 2; i <= 20; i += 2)
    {
        printf("%d \n", i);
    }
printf("\nImpar\n");
    {
        for (i = 1; i <= 20; i += 2)
            printf("%d \n", i);
    }
    return 0;
}