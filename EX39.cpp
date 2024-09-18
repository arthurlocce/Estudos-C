#include <stdio.h>
#include <stdbool.h>  // Inclui o suporte a booleanos (true/false)

// Fun��o que verifica se o n�mero � par
bool eh_par(int numero) {
    return numero % 2 == 0;  // Retorna true se for par, false se for �mpar
}

int main() {
    int numero;

    // Recebe um n�mero do usu�rio
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &numero);

    // Chama a fun��o e imprime o resultado
    if (eh_par(numero)) {
        printf("%d � par.\n", numero);
    } else {
        printf("%d � �mpar.\n", numero);
    }

    return 0;
}

