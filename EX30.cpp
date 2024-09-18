#include <stdio.h>

int main (){
	float f=30,c;
	
	while(f<=50){
		c=(f-32)/1.8;
		
		if((int)f%2==0){
			printf("|Valor em °F = %.0f | Valor em °C = %.0f|\n",f,c);
		}
		f++;
	}
	return 0;
}
