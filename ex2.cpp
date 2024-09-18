#include <stdio.h>
#include <stdlib.h>

int main(){
	float nota1;
	float nota2;
	float media;
	
	printf("|Descubra se foi aprovado|\n");
	printf("\nInsira a nota na primeira prova: ");
	scanf("%f",&nota1);
	
	printf("\nInsira a nota na segunda prova: ");
	scanf("%f",&nota2);
	
	media = (nota1+nota2)/2;
	printf("\nMedia final: %.2f\n", media);
	
	if (media>=6){
		printf("Aprovado(a)!");
	}
	
		if (media<6){
		printf("Reprovado(a)!");
	}
	
			if (media==10){
		printf(" Parabens voce fechou com 10!!\n");
	}
	
	system("pause");
	return 0;	
}
