#include <stdio.h>

int main(void)
{

    int matriz[3][3];
    int linha, coluna, n1; 
    int somarlinha0 = 0, somarlinha1 = 0, somarlinha2 = 0;
    int somarcoluna0 = 0, somarcoluna1 = 0, somarcoluna2 = 0;
while(1){ 
    printf("1-> Para escrever a matriz\n2->Ver a soma das linhas\n3->ver a soma colunas\n4->Verificar de e um cubo magico");
    scanf("%d", &n1);

switch (n1)
{
case 1:
        for ( linha = 0; linha < 3; linha++)
            {
                for (coluna = 0; coluna < 3; coluna++)
                {
                    printf("[%d][%d]",linha,coluna);
                    scanf("%d", &matriz[linha][coluna]);
                }
            }
    break;
case 2:
        printf("----Soma de todos os numeros de cada linha----\n");
        for (coluna = 0; coluna < 3; coluna++)
        {
            somarlinha0 += matriz[0][coluna];
            somarlinha1 += matriz[1][coluna];   
            somarlinha2 += matriz[2][coluna];        
        }   printf("Linha 0 -> %d\nLinha 1 -> %d\nLinha 2 -> %d\n",somarlinha0,somarlinha1,somarlinha2);

    break;

    case 3:
        printf("----Soma de todos os numeros de cada coluna----\n");
        for (linha = 0; linha < 3; linha++)
        {
            somarcoluna0 += matriz[linha][0];
            somarcoluna1 += matriz[linha][1]; 
            somarcoluna2 += matriz[linha][2];           
        }   printf("coluna 0 -> %d\ncoluna 1 -> %d\ncoluna 2 -> %d\n\n",somarcoluna0,somarcoluna1,somarcoluna2);    
    break;

    case 4:
        printf("----Quadrado magico----\n");
        if ((somarlinha0 == somarlinha1) && (somarlinha1 == somarlinha2) && (somarcoluna0 == somarcoluna1) && (somarcoluna1 == somarcoluna2))
        {
           printf("E um cubo magico\n");
        }else{
            printf("Nao e um cubo magico\n");
        }  
    break;

default:
    break;
}
}
}