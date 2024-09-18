#include <stdio.h>

int main(){
	
	float sal,nvs;
	int pla;
    printf("Salario atual: ");
	scanf("%f",&sal);
	printf("Plano de Trabalho(1 a 3): ");
	scanf("%d",&pla);
	
	switch(pla) {
		
		case 1:
			nvs=sal*1.1;
			printf("Novo salario = R$%.2f",nvs); 
			break;
			
		case 2:
			nvs=sal*1.15;
			printf("Novo salario = R$%.2f",nvs);
			break;
		
		case 3:
			nvs=sal*1.2;
			printf("Novo salario = R$%.2f",nvs);
			break;
		
		default:
			printf("Opcao invalida!");
			break;
	}
	
	return 0;
}

