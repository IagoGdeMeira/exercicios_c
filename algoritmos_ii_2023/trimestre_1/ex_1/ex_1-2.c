#include <stdio.h>

int main() {
    float salario, reajuste, novo_salario;
    
    scanf("%f", &salario);
    scanf("%f", &reajuste);
    novo_salario = salario + (salario * reajuste * 0.01);
    
    printf("NOVO SALÁRIO: R$%.2f\n", novo_salario);

    return 0;
}
