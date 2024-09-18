#include <math.h>
#include <stdio.h>

int main(){
	float comp;
	float larg;
	float pc;
	float ct;
	
	printf("Comprimento da sala(m): ");
	scanf("%f",&comp);
	
	printf("Largura da sala(m): ");
	scanf("%f",&larg);
	
	printf("Preco do metro quadrado do carpete: ");
	scanf("%f",&pc);
	
	ct=(comp*larg)*pc;
	
	printf("O custo total para forrar o piso: R$%.2f",ct);
	
	return 0;
}

