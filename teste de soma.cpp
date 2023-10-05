#include <stdio.h>
#include <stdlib.h>

int main() {
    int q, p;
    int vetor[3], i;
      
    for ( i = 0; i < 3; i++){
    printf ("quantidade vendida\n");
    scanf ("%d",&q);
    printf ("preco\n");
    scanf ("%d",&p);
    vetor[i] = q * p;
    }
    for ( i = 0; i < 3; i++){
    printf ("dia %i faturamento %i\n",i, vetor[i]);
    }
} 