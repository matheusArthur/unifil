#include <stdio.h>
#include <stdlib.h>

int verNumero (int n1, int n2){
    int media;
    media = (n1 + n2)/2;
    printf("Media -> %d",media);
    return media;
}

int main(void)
{
    int num1,num2;

    printf("Digite os 2 numeros da para fazer a media -> ");
    scanf("%d", &num1);
    scanf("%d", &num2);
    verNumero(num1,num2);
    
    
}