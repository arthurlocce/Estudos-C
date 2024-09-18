#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	char nome[100];
	char iniciais[100];
	int j=0;
	printf("Digite um nome inteiro: ");
	fgets(nome,sizeof(nome),stdin);
	
	iniciais[j++] = nome[0];
	
	for(int aux=0;aux<strlen(nome);aux++){
		if (nome[aux] == ' ' && nome[aux + 1] != '\0' && nome[aux + 1] != '\n') {
			iniciais[j++]=nome[aux+1];
		}
	}
	
	iniciais[j] = '\0';
	 
	printf("Iniciais: %s\n", iniciais);
	return 0; 
}
