#include <stdio.h>
int main()
{
	float n1, n2, u, d, t, q,maior,menor;
	int esc;
	printf("Digite os numeros:\n");
	scanf("%f %f", &n1, &n2);
	printf("O que deseja fazer?\n 1-Média entre os numeros digitados;\n 2-Diferença entre o maior e menor;\n 3-Produto entre os numeros digitados;\n 4-Divisão do primeiro pelo segundo;\n");
	scanf("%d", &esc);

	switch (esc)
	{
	case 1:
		u = (n1 + n2) / 2;
		printf("Resultado: %.2f", u);
		break; 
	
	case 2:
		if(n1>n2){
			maior=n1;
			menor=n2;
		} else if (n2>n1){
			maior=n2;
			menor=n1;
		}
		d=maior-menor;
		printf("Resultado: %.2f", d);
		break; 
		
	case 3:
		t=n1*n2;
		printf("Resultado: %.2f", t);
		break; 
		
	case 4:
	    q=n1/n2;
	    printf("Resultado: %.2f", q);
 	    break; 
		
	
	}
  
	return 0;
}
