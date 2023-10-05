#include <stdio.h>

int main() {
    const int numAlunos = 20; // Número de alunos
    int pesquisa[numAlunos]; // Vetor para armazenar as respostas dos alunos

    // Inicialize contadores para cada resposta
    int excelente = 0, bom = 0, regular = 0, ruim = 0, pessimo = 0;

    // Ler as respostas dos 20 alunos
    printf("Digite as respostas dos alunos (1 a 5):\n");
    for (int i = 0; i < numAlunos; ++i) {
        printf("Aluno %d: ", i + 1);
        scanf("%d", &pesquisa[i]);

        // Contar as respostas
        switch (pesquisa[i]) {
            case 1:
                pessimo++;
                break;
            case 2:
                ruim++;
                break;
            case 3:
                regular++;
                break;
            case 4:
                bom++;
                break;
            case 5:
                excelente++;
                break;
            default:
                printf("Resposta inválida. Digite um valor entre 1 e 5.\n");
                i--; // Decrementar o contador para refazer a leitura
                break;
        }
    }

    // Apresentar os resultados da pesquisa
    printf("\nResultado da pesquisa:\n");
    printf("Péssimo: %d aluno(s)\n", pessimo);
    printf("Ruim: %d aluno(s)\n", ruim);
    printf("Regular: %d aluno(s)\n", regular);
    printf("Bom: %d aluno(s)\n", bom);
    printf("Excelente: %d aluno(s)\n", excelente);

    return 0;
}
