#include <stdio.h>
#include <stdlib.h>

int main (){
const int tv = 3;
int i, a[tv], b[tv];

printf("Digite o os 3 valores do vetor a\n");
for ( i = 0; i < tv; i++)
{
    scanf("%d",&a[i]);
}

for ( i = 0; i < tv; i++)
{
    b[i] = a[i] * a[i];
}
printf("Os valores ao quadrado do vetor a sao\n");
for ( i = 0; i < tv; i++)
{
    printf("-> %d", b[i]);
}

}