#include <stdio.h>
#include <stdbool.h>  // Inclui o suporte a booleanos (true/false)

// Função que verifica se o número é par
bool eh_par(int numero) {
    return numero % 2 == 0;  // Retorna true se for par, false se for ímpar
}

int main() {
    int numero;

    // Recebe um número do usuário
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    // Chama a função e imprime o resultado
    if (eh_par(numero)) {
        printf("%d é par.\n", numero);
    } else {
        printf("%d é ímpar.\n", numero);
    }

    return 0;
}

