#include <stdio.h>
#include <stdlib.h>

int main (){
char nomes[5][100];
int i, a = 5;

for ( i = 0; i < a; i++)
{
    printf("Digite o %d nome: ", i+1);
    scanf("%s",nomes[i]);
}

printf("Os nomes inseridos foram\n");

for ( i = 0; i < a; i++)
{
    printf("nome %d: %s\n",i,nomes[i]);
}

    
}