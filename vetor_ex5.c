#include <stdio.h>
#include <stdlib.h>

int main (){
const int tv = 3;
int i, a[tv], b[tv],c[tv];

printf("Digite os 3 valores do vetor A\n");
for ( i = 0; i < tv; i++)
{
    scanf("%d",&a[i]);
}

printf("Digite os 3 valores do vetor b");
for ( i = 0; i < tv; i++)
{
    scanf("%d",&b[i]);
}

printf("Os valores do vetor c resultados da subtracao do vetor a e b sao");
for ( i = 0; i < tv; i++)
{
    c[i] = a[i] - b[i];
}

printf("Os valores do vetor c resultados da subtracao do vetor a e b sao");
for ( i = 0; i < tv; i++)
{
    printf("-> %d\n",c[i]);
}
}