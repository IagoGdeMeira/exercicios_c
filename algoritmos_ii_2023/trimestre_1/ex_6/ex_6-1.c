#include <stdio.h>

int main() {
    int numero[10];
    
    for(int i = 0; i < 10; i++) {
        printf("Informe o %dº inteiro: ", i+1);
        scanf("%d", &numero[i]);
    }
    
    for(int i = 1; i <= 3; i++)
        printf("\n");
    
    for(int i = 0; i < 10; i++)
        printf("%dº inteiro informado: %d\n", i+1, numero[i]);
    
    return 0;
}
