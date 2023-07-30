// Crie um programa que receba uma string e um caractere do usuário, conte e imprima quantas vezes esse caractere aparece na string.
#include <stdio.h>

int str_chr(char string[], char ch) {
    int i = 0, j = 0;

    while (string[i] != '\0') {
        if (string[i] == ch) {
            j++;
        }
        i++;
    }
    if(j == 0){
        return -1;
    }
    return j;
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
        printf("O caractere '%c' foi encontrado %d vezes na string.\n", ch, result);
    } else {
        printf("O caractere '%c' nao foi encontrado na string.\n", ch);
    }

    return 0;
}
