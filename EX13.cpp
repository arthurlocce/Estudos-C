/*Um usu�rio deseja utilizar um sistema protegido por
senha. Ele tem 3 tentativas para acertar a senha correta.
Defina uma senha (tipo int) e fa�a um programa que
solicite a senha do usu�rio. Enquanto ele n�o acertar o
programa dever� imprimir �Acesso negado�. Caso
contr�rio, dever� imprimir �Acesso liberado�.
*/

#include <stdio.h>
#include <math.h>

int main (){
	int cont;
	int senha = 20021204;
	bool aux = true;
	
	while(aux!=false){
		int sen;
		printf("Digite a senha: ");
		scanf("%d",&sen);
		++cont;
		
		if (sen==senha){
			printf("Acesso liberado!\n");
			aux=false;
		}
		
		if (cont==3 &&sen!=senha){
			aux=false;
			printf("Acesso Negado!\n");
		}

		
	}
	
	
	
	
	
	
	
	
	
	return 0;
}








