#include <stdio.h>

int main (){
	
	int num=0,maior=0,menor=0,quant=0;
	bool check = true;
	while (check==true){
		printf("Digite um numero(0 para sair): ");
		scanf("%d",&num);
		while (num<10 && num!=0){
			printf("O numero deve ser maior que 10 (0 para sair)\n");
			printf("Digite um numero(0 para sair): \n");
			scanf("%d",&num);
		}
		
		if (num==0){
			check = false;
			break;
		}
		
		if (num!=0){
			++quant;
			
		}  
		
		if (quant==1){
			maior=num;
			menor=num;
		}
		
		if (num>maior){
			maior=num;
		}
		
		if (num<menor&&num!=0){
			menor=num;
		}
	}
	printf("Quantidade de numeros digitados: %d\n",quant);
	printf("Maior numero digitado: %d\n",maior);
	printf("Menor numero digitado: %d\n",menor);
	return 0;
}
