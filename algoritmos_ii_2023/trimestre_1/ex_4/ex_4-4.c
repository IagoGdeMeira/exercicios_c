#include <stdio.h>

int main () {
    float produtos[5];
    
    for(int i = 0; i < 5; i++) {
        printf("Informe o preço do %dº produto: ", i+1);
        scanf("%f", &produtos[i]);
        produtos[i] += produtos[i] * 0.1;
    }
    
    for(int i = 0; i < 5; i++)
        printf("Valor corrigid do %dº produto: R$%.2f.\n", i+1, produtos[i]);
    
    return 0;
}
