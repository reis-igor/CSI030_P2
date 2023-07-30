/* Crie um programa que gere 100 números aleatórios1 sorteados entre 30 e 100 (inclusive) e os armazene em um vetor de 100 posições. 
Em seguida, imprima todos os números gerados e a média desses valores. 
Ao final, imprima os valores e os índices dos elementos que são maiores do que média. */
#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

#define TAM 100 // Define TAM como 100 p n alterar durante o código caso eu erre :)

int main(){
    int vetor[TAM]; 
    int i; 
    int soma = 0;
    float media;

    srand(time(NULL)); //numero aleatorio vai ser de acordo com o tempo em segundos

    for(i = 0; i < TAM ; i++){
        vetor[i] = rand() % (100 - 30 + 1) + 30; // Numero aleatorio entre 100 e 30; (lim superior - lim inferior + 1) + limite inferior
        soma += vetor[i];
    }

    media = (float)soma/TAM; 

printf("Numeros gerados:\n");
for(i=0; i < TAM; i++){
    printf("%d ", vetor[i]); //estrutura de repetição p imprimir cada índice do vetor
}
printf("\n\n");

printf("Media: %2.f\n\n", media);

printf("Elementos maiores que a media:\n");
for (i = 0; i < TAM; i++)//ler todo o vetor
{
    if(vetor[i] > media)//restringe o vetor para apenas quando o numero que esta no indice i for > media
    {
        printf("Indice %d: %d\n", i+1 , vetor[i]);
    }
}

return 0;
}