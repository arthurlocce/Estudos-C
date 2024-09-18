/*
Elabore um programa que leia um número inteiro e imprima se ele
é par ou ímpar
*/	

#include <math.h>
#include <stdio.h>

int main(){
	int num;
	
	printf("Digite o numero que deseja saber se eh par ou impar: ");
	scanf("%d",&num);
	
	if(num%2==0){
		printf("O numero %d é par",num);
	}
	
	else{
	printf("O numero %d é impar",num);
	}
	return 0;
}
