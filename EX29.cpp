#include <stdio.h>

int main(){
	int num,cont=1,smaior,aux,maior;
	while (cont<=10){
		smaior=maior;
		printf("Digite um num: ");
		scanf("%d",&num);
		if (num>maior){
			maior=num;
		}
		
		if (num<maior&&num>smaior) {
			smaior=num;
		}
		
		cont++;
	}
	printf("Os dois maiores num sao: %d e %d",maior,smaior);
	return 0;
}
