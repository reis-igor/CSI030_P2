/* Crie um programa que tenha um procedimento de assinatura void strinv(char str[]) que inverta a string recebida como parâmetro. 
Crie a função main() para ler a string, invocar o procedimento e imprimir o resultado. */
#include <stdio.h>
#include <string.h>

void strinv(char str[]) {
    int i, j;
    char aux;
    int len = strlen(str); //strlen retorna o tamanho da string
    
    for (i = 0, j = len - 1; i < j; i++, j--)
    {
        aux = str[i];
        str[i] = str[j];
        str[j] = aux;
    }
}

int main() {
    char str[100];
    
    printf("Digite uma string: ");
    gets(str);
    
    // Removendo o \0 do final
    str[strcspn(str, "\n")] = '\0';
    
    strinv(str);
    
    printf("String invertida: %s\n", str);
    
    return 0;
}
