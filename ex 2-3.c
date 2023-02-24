#include <stdio.h>

int main() {
    float razao, termo_1, total;
    
    scanf("%f", &razao);
    scanf("%f", &termo_1);
    
    total = termo_1;
    
    for(int i = 1; i <= 10; i++) {
        total += razao;
    }
    
    printf("TOTAL: %.2f", total);
}
