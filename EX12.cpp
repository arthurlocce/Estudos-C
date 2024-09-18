/* 
Elabore um programa que leia vários números inteiros até
o usuário digitar um número negativo. Para cada número
lido deverá ser calculado e impresso seu fatorial.
*/ 	

#include <stdio.h>
#include <stdlib.h>

int main (){
	int fatorial, num;
	bool cont = true;
	
	while (cont!=false){
	
		printf("Digite um numero(negativo para sair): ");
		scanf("%d",&num);
		
		if (num<0){
			cont=false;
		}
		
		fatorial=1;
		if (num>0){
		for(int aux=1;aux<=num;aux++){
			fatorial= fatorial * aux;
		}
	 }
	 if (num>0) {
		printf("O fatorial de %d é %d \n",num,fatorial);
	}
}
	
	return 0;
}
