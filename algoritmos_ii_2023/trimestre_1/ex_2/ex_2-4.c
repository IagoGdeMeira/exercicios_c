#include <stdio.h>

int main() {
    float razao, termo_1, total;
    
    scanf("%f", &razao);
    scanf("%f", &termo_1);
    
    total = termo_1;
    
    for(int i = 2; i <= 5; i++) {
        total = total * razao;
    }
    
    printf("TOTAL: %.2f", total);
    
    return 0;
}
