#include <stdio.h>
#include <string.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	char s[20];
	char c;
	int quant=0;
	
	printf("Digite um caractere: \n");
	scanf("%c", &c);
	getchar();
	
	printf("Digite algo: \n");
	fgets(s,20,stdin);
	
	for (int aux=0;aux<20;aux++){
		if(s[aux]==c){
			quant++;
		}
	}
	 
	printf("O número de vezes que \"%c\" parece no que o usuário digitou foi: %i\n",c,quant);
	return 0;
}
