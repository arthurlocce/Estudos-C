#include <stdio.h>
#include <math.h>

int main (){
	int num;
	int qlidos;
	int maiornum;
	int menornum;
	bool cont = true;
	 
	while (cont !=false ){
		printf("Digite um numero (0 para sair): ");
		scanf("%d",&num);
		
		if (num<=0) {
		    cont=false;
	}
		if (num>0){
			qlidos++;
	}
		if (qlidos==1){
		
			maiornum=num;
			menornum=num;
	}
	
	    if (num>maiornum){
		    maiornum=num;
	}
	
	    if (num<menornum && num>0){
		    menornum=num;
	}
}
	
	printf("Maior numero lido: %d\n", maiornum);
	printf("Menor numero lido: %d\n", menornum);
	printf("Quantidade de numeros lidos: %d\n", qlidos);
} 
