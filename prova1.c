#include <stdio.h>

void arredar(int arr[], int n, int k) {
    int temp[k];
    
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }
    
    for (int i = n - 1; i >= 0; i--) { // Correção feita aqui
        arr[i] = arr[i - k];
    }
    
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int n, k;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int vetor[n];

    for (int i = 0; i < n; i++) {

        printf("Digite o valor %d  do vetor:\n", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("Digite o valor de k (0 < k < %d): ", n);
    scanf("%d", &k);

    if (k <= 0 || k >= n) {
        printf("O valor de k deve ser maior que zero e menor que %d.\n", n);
        return 1;
    }

    arredar(vetor, n, k);

    printf("Vetor deslocado para a direita de %d posicoes:\n", k);
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
