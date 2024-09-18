#include <stdio.h>
#include <string.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	char s[5];
	char sin[5];
	printf("Digite algo: ");
	fgets(s,sizeof(s),stdin);
	
	for(int aux=0;aux<4;aux++){
		sin[aux]=s[4-1-aux];
	}
	sin[4]='\0';
	
	printf("String original: ");
	puts(s);
	
	printf("String invertida: ");
	puts(sin);
	
	return 0;
}
