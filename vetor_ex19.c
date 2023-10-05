#include <stdio.h>
#include <stdlib.h>

int acrescimo (double antigo, double atual){
    double diferenca;
    diferenca = (atual - antigo)/100;
    printf("O Percentual de acrescimo-> %f\n",diferenca);
    return diferenca;
}

int maiorEmenor (int numeros[5]){

    int i, maior = numeros[0], menor = numeros[0];

    for ( i = 0; i < 5; i++)
    {
        if (numeros[i] > maior)
        {
            maior = numeros[i];
        }
        else if (numeros[i] < menor)
        {
            menor = numeros[i];
        }
        
    }
        printf("Maior numero = %d\n",maior);
        printf("Menor numero = %d\n",menor);
        return 1;
}


int main(void)
{
 while (1)
 {
    int n1, n2, n3, i;
    int n4[5];

    printf("--------------------\n1-> Percentual de acrescimo\n2-> Maior e Menor numero\n3->\n");
    scanf("%d",&n1);
    switch (n1)
{
case 1:
    printf("escreva o antigo e o novo\n");
    scanf("%d",&n2);
    scanf("%d",&n3);
    acrescimo(n2,n3);
    break;

case 2:
    printf("Digite 5 numeros\n");
    for (i = 0; i < 5; i++)
    {
     scanf("%d", &n4[i]);
    }
    maiorEmenor(n4);
    break;

case 3:    
   
    break;
    default:
        printf("erro!!!");
    break;
}  
}
}
