#include <stdio.h>
#include <stdlib.h>

int verNumero (int n1){
    
    if (n1 > 0)
    {
       printf("POSITIVO\n");
    }else
    {
        printf("NEGATIVO\n");
    }
    return 0;
}

int main(void)
{
    int num1;

    printf("Digite um numero -> ");
    scanf("%d", &num1);
    verNumero(num1);
}