#include <stdio.h>
#include <stdlib.h>

int soma (int num1, int num2){
    int r;
    r = num1 + num2;
    printf("O resultado da soma e: %d\n",r);
    return r;
}

int divisao (int num1, int num2){
    int r;
    if (num2 == 0)
    {
       printf("Nao e possivel dividir por zero:\n");
    }else{
        r = num1 / num2;
    printf("O resultado da divisao e: %d\n",r);
    
}return r;
    }
    

int subtracao (int num1, int num2){
    int r;
    r = num1 - num2;
    printf("O resultado da subtracao e: %d\n",r);
    return r;
}

int multiplicacao (int num1, int num2){
    int r;
    r = num1 * num2;
    printf("O resultado da multiplicacao e: %d\n",r);
    return r;
}

int main()
{
int n1,n2,n3,r=0;
char escolha;

do {
    printf("Digite o primeiro valor\n");
    scanf("%d",&n1);
    printf("Digite o segundo valor\n");
    scanf("%d",&n2);
    printf("\nEscolha a operacao\n");
    printf("1. Soma\n2. Subtracao\n3. Multiplicacao\n4. Divisao\n\nOpcao:");
    scanf("%d",&n3);

    switch (n3)
    {
    case 1:
        soma(n1,n2);
        break;
    case 2:
        subtracao(n1,n2);
        break;
    case 3:
        multiplicacao(n1,n2);
        break;
    case 4:
        divisao(n1,n2);
        break;
    case 5:
        printf("Encerrando a calculadora...\n");
        break;
    default:
        printf("Erro, tente novemente!!!\n");
        break;   
    }

    if (n3 != 5) {
            printf("Deseja executar novamente? (S/N): ");
            scanf(" %c", &escolha);
        }

    } while (escolha == 's');
        printf("Resultado final: %d\n", r);
        return 0;
}
    