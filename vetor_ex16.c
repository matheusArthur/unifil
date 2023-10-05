#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{

    int matriz[3][3];
    int linha, coluna, n1, n2, encontrado=0, maior, menor; 
while(1){ 
    printf(" 1-> Preencher automaticamente toda a matriz\n 2-> Mostrar a matriz\n 3-> Pesquisa numero na matriz\n 4-> Mostre o maior e menor numero da matriz\n -> ");
    scanf("%d", &n1);

switch (n1)
{
case 1:
        for ( linha = 0; linha < 3; linha++)
            {
                for (coluna = 0; coluna < 3; coluna++)
                {
                    matriz[linha][coluna] = rand();
                    printf("[%d]\n",matriz[linha][coluna]);
                }
            }
    break;
case 2:
       for ( linha = 0; linha < 3; linha++)
            {
                for (coluna = 0; coluna < 3; coluna++)
                {
                    printf("[%d]\n",matriz[linha][coluna]);
                }
            }
    break;
case 3:
            printf("Escreva o numero que quer pesquisar: \n"); 
            scanf("%d",&n2);
            for (linha = 0; linha < 3; linha++)
            {
                for (coluna = 0; coluna < 3; coluna++)
                {
                 
            if (matriz[linha][coluna] == n2)
            {
                encontrado = 1;
            } 
                }
            }
    
    if (encontrado)
    {
        printf("Numero encontrado.\n");
    } else {
        printf("Número não existe na matriz.\n");
    }
    break;
case 4:
       for (int linha = 0; linha < 3; linha++) {
        for (int coluna = 0; coluna < 3; coluna++) {
            if (matriz[linha][coluna] > maior) {
                maior = matriz[linha][coluna];
            }
            if (matriz[linha][coluna] < menor) {
                menor = matriz[linha][coluna];
            }
        }
    }

    // Mostre o maior e o menor número
    printf("Maior numero na matriz: %d\n", maior);
    printf("Menor numero na matriz: %d\n", menor);
    default:
    break;
}
} 
}