#include <stdio.h>

int main (){
	float c=1.5,z=1.10;
	int cont=0;
		
	while (z<c){
		c=c+0.2;
		z=z+0.3;
		cont++;
	}
	
	printf("Levara %d anos para que Ze se torne mais alto",cont);
	return 0;
}
