#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i;
    int R;
    // i= i + 1
    // i++

    // i+=2 Pulando de 2 em 2 +
    // i-=2 Pulando de 2 em 2 -

    printf("Digite um numero:");
    scanf("%d", &i);

 for (R = 1; R <= 10; R++){
 printf("%d x %d = %d \n", R, i, R * i);


 }

 
return 0;
}