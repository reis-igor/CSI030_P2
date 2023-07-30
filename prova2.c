#include <stdio.h>

int str_chr(char string[]) {
    int i = 0;
    char e = 'E';
    char b = 'B';
    char d = 'D';
    int j = 0;

    while (string[i] != '\0') {
        if (string[i] == e) {
            string[i] = 'M';
        }
        if (string[i] == b){
            string[i] = 'P';
        }
        if (string[i] == d){
            string [i] = 'W';
        }
        if (string[i] == 'A'){
            j++;
        }
        i++;
    }

    return j;
}

int main() {
    char string[100]; // Tamanho máximo da string é 100 (Fernando disse que se o enunciado não nos der o tamanho podemos definir um :)

    printf("Digite uma string:\n");
    fgets(string, 100, stdin);

    int str = str_chr(string);

    printf("O numero de letras 'A' e %d\n", str);
    printf("A string ficou:\n");
    printf(string);

    return 0;
}