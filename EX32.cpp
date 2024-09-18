#include <stdio.h>

int main (){
	int n,cont=1,soma;
	int valorAnterior = 2;
	int valorAtual = 3;
	printf("Ate qual num quer calcular a sequencia? ");
	scanf("%d",&n);
	
	while (cont<n) {
		soma = valorAnterior + valorAtual;
		valorAnterior = valorAtual;
		valorAtual = soma;
		cont++;
		
	}
	
	printf("%d",soma);
	return 0;
}
