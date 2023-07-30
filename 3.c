//Crie um programa que receba um vetor de números inteiros de tamanho N e conte quantos números primos estão presentes.
#include <stdio.h>

int main(){
    int i, n, divisores, j, k=0;

    printf("Digite a quantidade de numeros:");
    scanf("%d", &n);

    int primos[n];

    for(i = 0; i < n; i++){
        printf("Digite o numero %d do vetor:", i+1);
        scanf("%d", &primos[i]);
    }

    for(i = 0; i <= n; i++) {
        divisores = 0;
        for(j = 1; j <= primos[i]; j++) //vai de j a primos [i]
        {
            if(primos[i] % j == 0)  //verifica o resto de todas as divisões do número primos[i] e j++ (incrementa até o primos[i])
            {
                divisores++;
            }
        }
        if(divisores == 2) //se o resto for = 0 em apenas duas condições (1 e o próprio primos[i]), o contador k incrementa, contando quantos números primos passaram nessa condição
        {
            k ++;
        }
    }

    printf("%d sao primos", k);
    return 0;
}