// Crie um programa que receba uma matriz de ordem MxN e calcule a soma dos elementos acima da diagonal principal.
#include <stdio.h>

void sum(int M, int N, int matriz[M][N]) {
    int i, j, soma = 0;

    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            if (i < j) {
                soma = soma + matriz[i][j];
            }
        }
    }
    
printf("A soma dos elementos acima da diagonal principal e: %d", soma);

}

void printmatriz(int M, int N, int matriz[M][N]) {
    int i, j;

    printf("\nA matriz e:\n");
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main(){
    int M, N, i, j;

    printf("Digite o numero de linhas da matriz: \n");
    scanf("%d", &M);

    printf("Digite o numero de colunas da matriz: \n");
    scanf("%d", &N);

    int matriz[M][N];

    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++){
            printf("Digite o elemento da linha %d da coluna %d: \n", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    };

    printmatriz(M, N, matriz);
    sum(M, N, matriz);

    return 0;

}