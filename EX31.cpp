#include <stdio.h>

int main (){
	int num,quantpar=0,quantimp=0,mdpar=0,mdg=0,somapar=0,somag=0;
	bool cont = true;
	while (cont==true){
		printf("Digite um num: ");
		scanf("%d",&num);
		
		if (num==0){
			cont=false;
		}
		
		if (num%2==0&&num!=0){
			quantpar++;
			somapar=somapar+num;
		}
		
		if (num%2!=0&&num!=0){
			quantimp++;
		}
		if (num!=0){
		somag=somag + num;
		}
		
		
	}
	mdpar=somapar/quantpar;
	mdg= somag/(quantpar+quantimp);
	
	printf("Quantidade de num pares: %d\n",quantpar);
	printf("Quantidade de num impares: %d\n",quantimp);
	printf("Media de num pares: %d\n",mdpar);
	printf("Media geral: %d\n",mdg);
	
	return 0;
}
