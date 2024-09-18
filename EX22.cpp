#include <stdio.h>

int main() {
	float a,b,c,d,e,f,x,y;
	bool check = true;
	
	while (check ==true){
		printf("Digite os valores dos coeficientes: a,b,c,d,e,f: \n");
		scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f);
	
	if((a*e)-(b*d)!=0){
		x= ((c*e)-(b*f))/((a*e)-(b*d));
	    y= ((a*f)-(c*d))/((a*e)-(b*d));
	    printf("Valor de x= %.2f\n",x);
	    printf("Valor de y= %.2f\n",y);
	} 
	
	else{
		printf("Nao eh possivel realizar a conta\n");
	}
			
	if (a==0&&b==0&&c==0&&d==0&&e==0&&f==0){
		check = false;
	}
	
}

    return 0;
}

