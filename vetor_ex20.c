#include <stdio.h>
#include <stdlib.h>

int fatorial (int b){
    if (b <= 1)
    {
        return 1;
    }else{
        return b * fatorial(b - 1);
    }
}

int main()
{
const int a = 3;
 int matrizA[a], matrizB[a],i;
 
 
 printf("Digite os 3 numeros da matriz\n");
 
 for (i = 0; i < a; i++)
 {
    scanf("%d\n", &matrizA[i]);
 }
 
 for  (i = 0; i < a; i++)
 {
    matrizB[i] = fatorial(matrizA[i]);
 }
 printf ("-----------Fatorial--------\n");
 for (i = 0; i < a; i++)
 {
    printf("Matriz A-> %d Fatorial B-> %d\n",matrizA[i], matrizB[i]);
 
}
}
