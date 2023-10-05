#include <stdio.h>
#include <stdlib.h>

int soma (int num1, int num2){
    int r;
    r = num1 + num2;
    printf("Resultado -> %d",r);
    return r;
}

int divisao (int num1, int num2){
    int r;
    r = num1 / num2;
    printf("Resultado -> %d",r);
    return r;
}

int subtracao (int num1, int num2){
    int r;
    r = num1 - num2;
    printf("Resultado -> %d",r);
    return r;
}

int vezes (int num1, int num2){
    int r;
    r = num1 * num2;
    printf("Resultado -> %d",r);
    return r;
}

int main()
{
int n1, n2;
char c;

printf("Digite o calculo dos numeros que deseja\n");
scanf("%d ",&n1);
scanf("%c ",&c);
scanf("%d",&n2);

if (c == '+')
{
    soma(n1,n2);
}
if (c == '-')
{
    subtracao(n1,n2);
}
if (c == '*')
{
    vezes(n1,n2);
}
if (c == '/')
{
    divisao(n1,n2);
}
}
