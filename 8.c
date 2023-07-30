/* Crie um programa que gere uma matriz MxN com valores aleatórios. 
Ao final o programa deverá: 
• Mostrar os valores da matriz; 
• Pedir um valor para o usuário e multiplicar todos os elementos por esse valor. 
• Mostrar a matriz com os novos valores. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void randmatriz(int M, int N, int matriz[M][N]) {
    int i, j;

    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            matriz[i][j] = rand() % 100; // Gera um valor aleatório entre 0 e 99
        }
    }
}

void printmatriz(int M, int N, int matriz[M][N]) {
    int i, j;

    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void multmatriz(int num, int M, int N, int matriz[M][N]) {
    int i, j;

    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            matriz[i][j] = matriz[i][j]*num;
        };
    }

}

int main() {
    srand(time(NULL));
    int M, N, num;

    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &M);

    printf("Digite o numero de colunas da matriz: ");
    scanf("%d", &N);

    int matriz[M][N];

    randmatriz(M, N, matriz);

    printf("\nMatriz gerada:\n");
    printmatriz(M, N, matriz);

    printf("\n");
    
    printf("Digite um numero para multiplcar a matriz:\n");
    scanf("%d", &num);

    multmatriz(num, M, N, matriz);

    printf("\nMatriz multiplicada por %d:\n", num);
    printmatriz(M, N, matriz);

    return 0;
}