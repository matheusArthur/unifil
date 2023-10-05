#include <stdio.h>
int calcularFatorial(int n){
    if (n<=1)
    {
    return 1;
    }else{
    return n + calcularFatorial(n - 1);
}
}

int main() {
    const int n = 3; 
    int i, numeros[n], b[n]; 

    printf("Digite 3 numeros\n");
    for (int i = 0; i < n; i++) 
    {
        printf("numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    for (int i = 0; i < n; ++i) 
{
        b[i] = calcularFatorial(numeros[i]);
}

printf("resultado\n");

for ( i = 0; i < n; i++)
{
    printf("%d somatorio-> %d\n",numeros[i], b[i]);
}
}

