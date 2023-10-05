#include <stdio.h>

int main(void)
{

    int n1, matriz[2][2];
    int linha,coluna; 
    int somaDiagonalPrincipal = 0, media = 0, somarlinha= 0, soma = 0,somaTotal = 0;
    
    while (1) {
    printf(" -----MENU-----\n");
    printf(" Digite 1 para -> Preencher as matrizes\n Digite 2 para -> Mostrar a matriz\n Digite 3 para -> Mostre a soma da segunda coluna\n Digite 4 para -> Mostre a soma da terceira linha\n Digite 5 para -> Mostre a soma de todos os numeros\n Digite 6 para -> Mostre os numeros maiores que a media\n");

    scanf("%d", &n1);

    switch (n1)
    {
    case 1:
            for (int linha = 0; linha < 2; linha++) 
            {
                for (int coluna = 0; coluna < 2; coluna++)
                {
                    printf("Digite o valor para Matriz[%d][%d]: ", linha, coluna);
                    scanf("%d", &matriz[linha][coluna]);
                }
            }
            break;

    case 2:
        printf("-----MATRIZ-----\n");
        for (linha = 0; linha < 2; linha++)
        {
            for (coluna = 0; coluna < 2; coluna++)
            {
                printf("-> %d\n", matriz[linha][coluna]);
            }
        }
        break;
    case 3:
        for (linha = 0; linha < 2; linha++)
        {
            soma += matriz[linha][0];           
        }
        printf("A soma da coluna 1 e: %d\n",soma);
        break;

    case 4:
    for (coluna = 0; coluna < 2; coluna++)
        {
            somarlinha += matriz[1][coluna];           
        }
        printf("A soma da segunda linha e: %d\n",somarlinha);
        break;
    case 5:
            for (linha = 0; linha < 2; linha++)
                {
                    for (coluna = 0; coluna < 2; coluna++)
                    {
                        somaTotal += matriz[linha][coluna];
                    }
                    }
                    printf("A soma de todos os numeros da matriz e: %d\n", somaTotal);
        break;
    case 6:
            for (linha = 0; linha < 2; linha++)
                {
                    for (coluna = 0; coluna < 2; coluna++)
                        {
                            media = somaTotal / 2;
                            if (matriz[linha][coluna] > media)
                                {
                                    printf("%d \n",matriz[linha][coluna]);
                                }
                        }
                }
        break;
    case 7:
            for (int i = 0; i < 2; i++) {
                    somaDiagonalPrincipal += matriz[i][i];
                }
                printf("A soma da diagonal principal e: %d\n", somaDiagonalPrincipal);
        break;
    case 8:
            for (linha = 0; linha < 2; linha++)
                {
                    for (coluna = 0; coluna < 2; coluna++)
                        {
                            if (matriz[linha][coluna] % 2 == 0) {
                            matriz[linha][coluna] *= 2;
                        }printf("Numeros pares dobrados sao: %d\n",matriz[linha][coluna]);
                        }
                }
                
        break;
        
}
}
}