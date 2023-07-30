// Crie um programa que receba uma matriz de ordem MxN e encontre o maior e o menor elemento da matriz.
#include <stdio.h>

void procm(int M, int N, int matriz[M][N]) {
    int i, j, maior = 0, menor;

    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++){
            if(matriz[i][j] > maior){

                maior = matriz[i][j];

            };}}

    menor = maior;

    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++)
            if(matriz[i][j] < menor){
                menor = matriz[i][j];
            };
        };
    

    printf("O menor numero da matriz e: %d\n", menor);
    printf("O maior numero da matriz e: %d\n", maior);

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

    procm(M, N, matriz);

    return 0;

}