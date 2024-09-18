/*Um usuário deseja utilizar um sistema protegido por
senha. Ele tem 3 tentativas para acertar a senha correta.
Defina uma senha (tipo int) e faça um programa que
solicite a senha do usuário. Enquanto ele não acertar o
programa deverá imprimir “Acesso negado”. Caso
contrário, deverá imprimir “Acesso liberado”.
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








