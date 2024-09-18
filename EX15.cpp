/*
Construa um programa que leia os lados de um quadrilátero e
determine se é um Quadrado ou um Retângulo
*/	

#include <math.h>
#include <stdio.h>

int main (){
	
	int l1,l2,l3,l4;
	printf("De o tamanho dos lados do quadrilatero(cm): \n");
	scanf("%d %d %d %d",&l1,&l2,&l3,&l4);
	
	if (l1==l2 && l2==l3 &&l3==l4){
		printf("Eh um quadrado!\n");
	}
	
	else if (l1==l3 && l2==l4){
		printf("Eh um retângulo!\n");
	}
	else{
		printf("Nao eh um quadrilatero\n");
	}
	
	return 0;
}
