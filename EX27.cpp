#include <stdio.h>

int main (){
	int num,c1=0,c2=0,c3=0,c4=0;
	while (num>=0){
		printf("Digite um num: ");
		scanf("%d",&num);
		
		if(num>=0&&num<=25){
			c1++;	
		}
		
		if(num>=26&&num<=50){
			c2++;	
		}
		
		if(num>=51&&num<=75){
			c3++;	
		}
		
				if(num>=76&&num<=100){
			c4++;	
		}
	}
	
	printf("Quantidade entre [0.25]: %d\n",c1);
	printf("Quantidade entre [26,50]: %d\n",c2);
	printf("Quantidade entre [51,75]: %d\n",c3);
	printf("Quantidade entre [76,100]: %d\n",c4);
	return 0;
}

