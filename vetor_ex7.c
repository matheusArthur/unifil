#include <stdio.h>
#include <stdlib.h>

int calcularFatorial(int n){
    if (n<=1)
    {
    return 1;
    }else{
    return n * calcularFatorial(n - 1);
}
}

int main (){
const int tv = 3;
int i, a[tv], b[tv];

printf("Digite o os 3 valores do vetor a\n");
for ( i = 0; i < tv; i++)
{
    scanf("%d",&a[i]);
}

for (int i = 0; i < tv; ++i) 
{
        b[i] = calcularFatorial(a[i]);
}

printf("Os valores ao quadrado do vetor a sao\n");

for ( i = 0; i < tv; i++)
{
    printf("%d fatorial-> %d\n",a[i], b[i]);
}
}