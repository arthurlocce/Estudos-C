#include <stdio.h>
#include <math.h>

int main(){
	int maior;
	int num;
	for(int cont=1;cont<=2;cont++){
		printf("Digite um numero: ");
		scanf("%d",&num);
		
		if (cont==1){
			maior=num;
		}
		else if(num>maior){
			maior=num;
	    }
			

	}
printf("%d",maior)	;
	
	
	
	return 0;
}
