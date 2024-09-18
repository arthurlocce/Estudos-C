#include <stdio.h>
#include <math.h>

int main(){
    float a;
    
    printf("Qual o comprimento da aresta do cubo? ");
    scanf("%f", &a);
    
    printf("Volume do cubo : %.2f\n", pow(a, 3));
    
    return 0;
}
