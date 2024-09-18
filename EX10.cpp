#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
	float vca;
	float vpg;
	int vt;
	int vinte;
	int dez;
	int cinco;
	int um;
	
	printf("Valor da Compra: R$");
	scanf("%f",&vca);
	
	printf("Valor Pago: R$");
	scanf("%f",&vpg);
	
	if (vca<vpg){
		vt=vpg-vca;
		printf("Valor Troco: R$%d\n",vt);
		
		vinte=vt/20;
		dez=(vt % 20)/10;	
		cinco=(vt%10)/5;
		um=(vt%5)/1;




	
		printf("Notas de 20.00 = %d\n",vinte);
		printf("Notas de 10.00 = %d\n",dez);
		printf("Notas de 5.00 = %d\n",cinco);
		printf("Moedas de 1.00 = %d\n",um);
	} else {
		printf("Erro");
	}
	
	




}
