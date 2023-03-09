#include <stdio.h>

int main() {
    float salarios[20];
    
    for(int i = 0; i < 20; i++) {
        printf("Informe o salário atual do %dº funcionário: ", i+1);
        scanf("%f", &salarios[i]);
        salarios[i] += salarios[i] * 0.08;
    }
    
    for(int i = 1; i <= 3; i++)
        printf("\n");
    
    printf("SALÁRIOS REAJUSTADOS\n");
    
    for(int i = 0; i < 20; i++)
        printf("%dº funcionário: R$%.2f\n", i+1, salarios[i]);
    
    return 0;
}
