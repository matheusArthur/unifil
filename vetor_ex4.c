#include <stdio.h>
#include <stdlib.h>

int main (){
const int tv = 3;
int i, a[tv],b[tv]; 

printf("Digite ops 3 elementos do vetor a: \n");
for ( i = 0; i < tv; i++)
{
    scanf("%d",&a[i]);
}

for ( i = 0; i < tv; i++)
{
    b[i] = a[i] * 3;
}

printf("Os numeros do vetor a multiplicados por 3 para o vetor b sao\n");
for ( i = 0; i < tv; i++)
{
    printf("-> %d\n", b[i]);
}

}