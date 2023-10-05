#include <stdio.h>
#include <stdlib.h>

int main (){
    int i, a, fatorial = 1, soma = 0;

    printf("escreva um numero = ");
    scanf("%d",&a);

    for (i = 2; i <= a; i = i + 2){
        fatorial = fatorial * i;
    }
        printf("fatorial: %d\n",fatorial);

    for (i = 0; i <= a; i = i + 2){
        printf("A soma dos numeros pares e de: %d\n",i);
        soma = soma + i;
    }
        printf("soma: %d\n",soma);
        printf("media: %d\n",soma/2);
        printf("maior numero: %d\n",i-2);
        
}
//Faça um algoritmo que calcule e escreva a soma dos números pares contidos entre 1 e um número máximo informado pelo usuário. Utilize o comando “PARA...ATE...FACA”.
//Faça um algoritmo que leia dez números inteiros em um laço de repetição com o comando “PARA...ATE...FACA”, após finalizar a repetição, mostre:
//A soma dos dez números;
//A média dos 10 números;
//O maior número;
//O menor número.
//Faça um algoritmo que calcule o fatorial de N (N!), sendo que:
//N! = 1 * 2 * ... * (N-1) * N