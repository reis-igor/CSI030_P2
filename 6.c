/* Crie um programa que tenha uma função de assinatura int strchr(char string[], char ch) 
que procure a primeira ocorrência do caractere ch na string. 
A função retorna um número inteiro indicando o índice do caractere, se for encontrado, ou -1, caso contrário. */
#include <stdio.h>

int str_chr(char string[], char ch) {
    int i = 0;

    while (string[i] != '\0') {
        if (string[i] == ch) {
            return i;
        }
        i++;
    }

    return -1;
}

int main() {
    char string[100]; // Tamanho máximo da string é 100 (Fernando disse que se o enunciado não nos der o tamanho podemos definir um :)
    char ch;

    printf("Digite uma string:\n");
    fgets(string, 100, stdin);

    printf("Digite o char que deseja procurar na string: \n");
    scanf("%c", &ch);

    int result = str_chr(string, ch);

    if (result != -1) {
        printf("O caractere '%c' foi encontrado no indice %d da string. Que e a posicao %d da palavra.\n", ch, result, result+1);
    } else {
        printf("O caractere '%c' nao foi encontrado na string.\n", ch);
    }

    return 0;
}
