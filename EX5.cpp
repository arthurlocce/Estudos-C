#include <stdio.h>
#include <math.h>

int main(){
	int num;
	
	printf("Digite um numero inteiro: ");
	scanf("%d",&num);
	
	int ant=num-1;
	int suc=num+1;
	printf("O antecessor e sucessor de %d respectivamente: %d e %d",num,ant,suc);
	
	return 0;
	
}
