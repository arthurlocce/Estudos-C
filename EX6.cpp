#include <stdio.h>
#include <math.h>

int main(){
	float dis;
	float comb;
	float cons;
	
	printf("Distancia percorrida(km):");
	scanf("%f",&dis);
	
	printf("Combustivel gasto(l):");
	scanf("%f",&comb);

	
	
	if (comb!=0){
		cons= dis/comb;
		printf("O veiculo consumiu %.2fkm/l",cons);
	}
		
	else{
	printf("Erro: Combustiel consumido nao deve ser zero.\n");
	}
	
	return 0;
	
	
}

