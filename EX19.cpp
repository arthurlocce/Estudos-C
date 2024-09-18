#include <stdio.h>

int main (){
	float x,multi;
	int n;
	printf("Digite um numero: ");
	scanf("%f",&x);
	bool check = true ;
	while (check != false){
		printf("Digite o expoente a ser multiplicado: ");
		scanf("%d",&n);
		if (n>=0){
			check=false;
		}
	}
	
	for (int cont;cont<=n;cont++){
		multi=x * x;
	}
	printf("%.2f",multi);
	
	return 0;
}
