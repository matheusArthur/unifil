#include <stdio.h>

int main(void)
{

    int a[3][2], transposta[2][3];
    int linha, coluna, n1; 
    
while (1){
    
    printf(" -----MENU-----\n");
    printf(" 1-> Escrever a matriz 3x2\n 2-> Mostrar a matriz 3x4\n 3-> Escrever a matriz transposta 2x3\n->");
    scanf("%d",&n1);

    switch (n1)
    {
    case 1:
            printf("Preencha a matriz 3x2\n");
                for ( linha = 0; linha < 3; linha++)
                {
                    for (coluna = 0; coluna < 2; coluna++)
                    {
                        printf("Digite o valor para a[%d][%d]\n",linha, coluna);
                        scanf("%d",&a[linha][coluna]);
                    }  
                }
    break;

    case 2:
        for (linha = 0; linha < 3; linha++)
        {
            for (coluna = 0; coluna < 2; coluna++)
            {
            printf("%d ",a[linha][coluna]); 
            }
        }
            
    break;

    case 3:
        for (linha = 0; linha < 3; linha++)
        {
            for (coluna = 0; coluna < 2; coluna++)
            {
            transposta[coluna][linha] = a[linha][coluna]; 
            }
        }
            printf("Matriz Transposta (2x3):\n");

        for (int linha = 0; linha < 2; linha++) 
            {
                for (int coluna = 0; coluna < 3; coluna++) {
                printf("%d ", transposta[linha][coluna]);
            }
            }
    break;

    default:
        printf("Tente novamente");
    break;
}
    
}
    
    
}