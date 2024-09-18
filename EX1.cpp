#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	char nome[50]="";
	printf("OLa Mundo!\n");
	printf("Eu me chamo %s e qual o seu nome?" ,"Arthur");
	scanf("%s",nome);
	printf("Prazer %s!\n",nome);
	system("pause");
	return 0;
}
