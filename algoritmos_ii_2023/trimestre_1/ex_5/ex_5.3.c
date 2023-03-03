#include <stdio.h>

int main() {
    int numeros[10], multiplo_7;
    
    for(int i = 0; i < 10; i++) {
        printf("Digite o %dº valor: ", i+1);
        scanf("%d", &numeros[i]);
    }
    
    for(int i = 0; i < 10; i++) {
        if (numeros[i] % 7 == 0)
            multiplo_7++;
    }
    
    printf("Você digitou %d número(s) múltiplo(s) de 7.", multiplo_7);
    
    return 0;
}
