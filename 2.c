/* Crie um programa que leia dois vetores de 10 posições e faça a multiplicação dos elementos de mesmo índice, 
colocando o resultado em um terceiro vetor. Imprima o vetor resultante. */
#include <stdio.h>

int main(){
int i;
int vetor1[10];
int vetor2[10];
int vetor3[10];

for(i=0; i < 10; i++){

    printf("Digite o numero %d do vetor 1:\n", i+1);
    scanf("%d", &vetor1[i]);

}

for(i=0; i < 10; i++){

    printf("Digite o numero %d do vetor 2:\n", i+1);
    scanf("%d", &vetor2[i]);

}

for(i=0; i < 10; i++){

    vetor3[i] = vetor1[i] * vetor2[i];

}

printf("Vetor resultante:\n");

for(i=0; i < 10; i++){

    printf("%d ", vetor3[i]);

}
return 0;


}