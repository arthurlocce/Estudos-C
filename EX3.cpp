#include <stdio.h>

int main()
{
    float sa;
    float p;
    float nvs;
    
    printf("Digite o salario atual: ");
    scanf("%f",&sa);

    printf("Digite o percentual de reajuste: ");
    scanf("%f",&p);
    
    p=p/100
    nvs=sa+(sa*p);
    
    printf("Salario atual(com reajuste) R$: %.2f", nvs);
    
    
    return 0;
}
