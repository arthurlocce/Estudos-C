#include <stdio.h>

int main (){
	int num,fat=1;
	while (1){
		
		printf("Digite um num: ");    
		fat=1;
		scanf("%d", &num);
		
			if (num < 0) {
                break; }
		
		    for (int cont=num;cont>1;cont--){
			    fat=fat*cont;}
			
		printf("Fatorial de %d = %d\n",num,fat);
	}
	return 0;
}
