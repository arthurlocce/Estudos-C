/*
Elabore um programa que leia um n�mero inteiro e imprima se ele
� par ou �mpar
*/	

#include <math.h>
#include <stdio.h>

int main(){
	int num;
	
	printf("Digite o numero que deseja saber se eh par ou impar: ");
	scanf("%d",&num);
	
	if(num%2==0){
		printf("O numero %d � par",num);
	}
	
	else{
	printf("O numero %d � impar",num);
	}
	return 0;
}
