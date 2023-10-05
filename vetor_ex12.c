#include <stdio.h>
#include <string.h>

int main() {
    
    float peso[5][2];
    int i; 

     for ( i = 0; i < 5; i++)
     {
     printf("Digite o seu peso atual %d: ",i+1); 
     scanf("%f", &peso[i][0]);

     printf("Digite o seu peso anterior %d: ",i+1);
     scanf("%f", &peso[i][1]);
     }

    printf("\nNomes dos alunos\n");
    for ( i = 0; i < 5; i++)
{
     printf("Pessoa %d peso atual-> %.2f kg  peso anterior -> %.2f\n", i + 1,peso[i][0],peso[i][1]);
}    
return 0;
}

