#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>  // Necessário para isalpha()

int main() {
    setlocale(LC_ALL, "Portuguese");

    char string[10];       // Aumentado para garantir que possa armazenar frases maiores
    char string_svg[10];   // Mesmo tamanho para armazenar a string resultante
    char vogais[] = "aeiouAEIOU"; // Correção: Declaração correta para uma string de vogais
    int j = 0;

    printf("Digite algo: ");
    fgets(string, sizeof(string), stdin);

    // Percorre cada caractere da string
    for (int aux1 = 0; aux1 < strlen(string); aux1++) {
        int is_vogal = 0;
        // Verifica se o caractere é uma vogal
        for (int aux2 = 0; aux2 < strlen(vogais); aux2++) {
            if (string[aux1] == vogais[aux2]) {
                is_vogal = 1;
                break;
            }
        }
        // Se não for uma vogal, adiciona ao resultado
        if (!is_vogal) {
            string_svg[j++] = string[aux1];
        }
    }

    // Adiciona o caractere nulo no final da string resultante
    string_svg[j] = '\0';

    printf("O que você digitou sem as vogais fica: %s\n", string_svg);

    return 0;
}

