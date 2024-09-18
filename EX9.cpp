#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
	float valor;
	float g1;
	float g2;
	float g3;
	
	printf("Valor do concurso R$: ");
	scanf("%f",&valor);
	
	g1=valor*0.46;
	g2=valor*0.32;
	g3=valor*0.22;
	
	printf("Ganhador 1: R$%.2f\n",g1);
	printf("Ganhador 2: R$%.2f\n",g2);
	printf("Ganhador 3: R$%.2f\n",g3);
	
	system("pause");
	return 0;
}
