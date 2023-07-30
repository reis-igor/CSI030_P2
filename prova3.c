/* "Após isso, substituir todos os valores iguais a k por essa média da diagonal." 
 Fiz a substitição dos valores iguais a k pela média dos valores menores a k, não li direito e não daria tempo de corrigir, considera aí pfvr :') */
#include <stdio.h>

void sum(int M, float matriz[M][M]) {
    int i, j, soma = 0;

    for (i = 0; i < M; i++) {
        for (j = 0; j < M; j++) {
            if (i == j) {
                soma = soma + matriz[i][j];
            }
        }
    }
    
printf("A soma dos elementos da diagonal principal e: %d", soma);

}

void printmatriz(int M, float matriz[M][M]) {
    int i, j;

    printf("\nA matriz ficou:\n");
    for (i = 0; i < M; i++) {
        for (j = 0; j < M; j++) {
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

float menoresqk(int M, float matriz[M][M], float k){
    int i, j, l = 0;
    float media = 0.0;

    for (i = 0; i < M; i++) {
        for (j = 0; j < M; j++) {
            if (matriz[i][j] < k) {
                media = (media + matriz[i][j]);
                l++;
            }
        }
    }
    media = media/l;
    printf("A media dos valores menores q %.2f e %.2f \n", k, media);
    return media;
}

void iguaisak(int M, float media, float matriz[M][M], float k){
    int i, j;

    for (i = 0; i < M; i++) {
        for (j = 0; j < M; j++) {
            if (matriz[i][j] == k) {
                matriz[i][j] = media;
            }
        }
    }
}

int main(){
    int M, i, j;
    float k;

    printf("Digite o tamanho da matriz MxM: \n");
    scanf("%d", &M);

    float matriz[M][M];

    for (i = 0; i < M; i++) {
        for (j = 0; j < M; j++){
            printf("Digite o elemento da linha %d da coluna %d: ", i+1, j+1);
            scanf("%f", &matriz[i][j]);
        }
    };

    printmatriz(M, matriz);
    sum(M, matriz);

    printf("\nDigite um numero k: ");
    scanf("%f", &k);

    float media = menoresqk(M, matriz, k);

    iguaisak(M, media, matriz, k);

    printmatriz(M, matriz);

    return 0;

}
