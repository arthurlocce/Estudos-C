#include <stdio.h>
#include <string.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	char s[10];
	char c= 'a';
	int cont_a=0;
	printf("Digite algo: ");
	fgets(s,10,stdin);
	
	for(int aux=0;aux<10;aux++){
		if(s[aux]==c){
			cont_a++;
		}
	}
    printf("O número de vezes que '%c' aparece no que você digitou foi: %d\n", c, cont_a);
    puts(s);
    return 0;
}
