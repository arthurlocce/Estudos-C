#include <stdio.h>

int main (){
	int num;
	printf("Digite um num: ");
	scanf("%d",&num);
	printf("Numeros: \n");
	while (num>1){
		num--;
		if (num%4==0){
			printf("%d\n",num);
		}
			
	}
	return 0;
}
