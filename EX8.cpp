#include <math.h>
#include <stdio.h>
#include <stdlib.h>


int main(){
	float peso;
	float altura;
	float imc;
	
	printf("|CALCULAR IMC|\n");
	
	printf("Digite seu peso(kg): ");
	scanf("%f",&peso);
	
		printf("Digite sua altura(m): ");
	scanf("%f",&altura);
	
	imc= peso/pow(altura,2);
	
	printf("VALOR IMC: %.2f\n",imc);
	
	system("pause");
	return 0;
}

