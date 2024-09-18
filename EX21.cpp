#include <stdio.h>

int main(){
	int quant,somap=0,numimp=0,num;
	printf("Digite quantos numeros deseja inserir: ");
	scanf("%d", &quant);
	
	for (int cont=1;cont<=quant;cont++){
		printf("Digite um numero: ");
		scanf("%d",&num);
		if (num%2==0){
			somap += num;
		}
		else{
			numimp++;
		}
	}
	printf("Soma dos pares= %d\n",somap);
	printf("Numero de numeros impares= %d\n",numimp);
	
	return 0;
}
