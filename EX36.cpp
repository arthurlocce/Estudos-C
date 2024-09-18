#include <stdio.h>
#include <string.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	char nome[30];
	char s_nome[30];
	char nomeint[61];
	printf("Digite seu nome: ");
	fgets(nome, sizeof(nome), stdin);
	nome[strcspn(nome, "\n")] = '\0';
	fflush(stdin);

	

	printf("Digite seu sobrenome: ");
	fgets(s_nome, sizeof(s_nome), stdin);
	s_nome[strcspn(s_nome, "\n")] = '\0';
	fflush(stdin);

	
	
	strcpy(nomeint, nome);
	strcat(nomeint, " ");
	strcat(nomeint, s_nome);
	
	printf("Nome completo: %s\n", nomeint);
	 
	int tamanho = strlen(nomeint);
	printf("Tamanho da string: %d\n", tamanho);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;	
}
