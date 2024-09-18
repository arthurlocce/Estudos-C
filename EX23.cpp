#include <stdio.h>

int main(){
	int num,fat=1;
	printf("Qual numero quer calcular o fatorial? ");
	scanf("%d",&num);
	
	for (int cont=num;cont>=1;cont--){
		fat=fat*cont;		
	}
	printf("Fatorial de %d = %d",num,fat);
	return 0;
}

