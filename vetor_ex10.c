#include <stdio.h>

int main() {
    const int numAlunos = 20; 
    int pesquisa[numAlunos]; 

    int excelente = 0, bom = 0, mediano = 0, ruim = 0, horrivel = 0;

    printf("Digite as respostas dos alunos (1 a 5):\n");
    for (int i = 0; i < numAlunos; ++i) {
        printf("Aluno %d: ", i + 1);
        scanf("%d", &pesquisa[i]);

        // Contar as respostas
        switch (pesquisa[i]) {
            case 1:
                horrivel++;
                break;
            case 2:
                ruim++;
                break;
            case 3:
                mediano++;
                break;
            case 4:
                bom++;
                break;
            case 5:
                excelente++;
                break;
            default:
                printf("Resposta inválida. Digite um valor entre 1 e 5.\n");
                i--; 
                break;
        }
    }

    printf("\nResultado da pesquisa:\n");
    printf("Péssimo: %d aluno(s)\n", horrivel);
    printf("Ruim: %d aluno(s)\n", ruim);
    printf("Regular: %d aluno(s)\n", mediano);
    printf("Bom: %d aluno(s)\n", bom);
    printf("Excelente: %d aluno(s)\n", excelente);

    return 0;
}
