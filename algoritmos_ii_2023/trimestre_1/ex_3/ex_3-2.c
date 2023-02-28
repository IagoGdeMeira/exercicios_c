#include <stdio.h>

int main() {
    float nume, denom, divisao;
    
    scanf("%f", &nume);
    scanf("%f", &denom);
    
    while (denom == 0) {
        printf("Valor inválido\n");
        scanf("%f", &denom);
    }
    
    divisao = nume / denom;
    printf("%.2f / %.2f = %.2f\n", nume, denom, divisao);
    
    return 0;
}