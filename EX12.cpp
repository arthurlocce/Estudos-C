/* 
Elabore um programa que leia v�rios n�meros inteiros at�
o usu�rio digitar um n�mero negativo. Para cada n�mero
lido dever� ser calculado e impresso seu fatorial.
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
		printf("O fatorial de %d � %d \n",num,fatorial);
	}
}
	
	return 0;
}
