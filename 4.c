/* Crie um programa que leia e armazene duas notas de 10 alunos e calcule e exiba as respectivas médias. 
O programa deve utilizar: 
• Um procedimento que receba dois vetores de notas decimais e o tamanho dos vetores e peça ao usuário para digitar as notas, 
de forma a preencher os vetores. 
• Um segundo procedimento deve receber os dois vetores de notas decimais e um vetor de médias decimais, 
bem como o tamanho dos vetores, e calcular a média das notas, preenchendo o vetor de médias. 
• Um terceiro procedimento deve receber os vetores de notas e médias, além do tamanho dos mesmos, e imprimir as informações de cada aluno 
(utilizando 2 casas decimais onde for preciso) no seguinte formato: 
Aluno 1: nota 1: 7.50 nota 2: 8.50 media: 8.00 */

#include <stdio.h>

void nota(float notas1[], float notas2[], int tam) {
    printf("Digite as notas dos alunos:\n");
    for (int i = 0; i < tam; i++) {
        printf("Nota 1 do Aluno %d: ", i + 1);
        scanf("%f", &notas1[i]);
        printf("Nota 2 do Aluno %d: ", i + 1);
        scanf("%f", &notas2[i]);
    }
}

void media(float notas1[], float notas2[], float medias[], int tam) {
    for (int i = 0; i < tam; i++) {
        medias[i] = (notas1[i] + notas2[i]) / 2;
    }
}

void printmedia(float notas1[], float notas2[], float medias[], int tam) {
    for (int i = 0; i < tam; i++) {
        printf("\nAluno %d\n", i + 1);
        printf("Nota 1: %.2f\n", notas1[i]);
        printf("Nota 2: %.2f\n", notas2[i]);
        printf("Media: %.2f\n", medias[i]);
    }
}

int main() {
    #define tam 10
    float notas1[tam], notas2[tam], medias[tam];

    nota(notas1, notas2, tam);
    media(notas1, notas2, medias, tam);
    printmedia(notas1, notas2, medias, tam);

    return 0;
}