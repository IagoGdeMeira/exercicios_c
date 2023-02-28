#include <stdio.h>

int main() {
    float razao, termo_1, termo_5;
    
    scanf("%f", &razao);
    scanf("%f", &termo_1);
    
    termo_5 = termo_1;
    
    for(int i = 2; i <= 5; i++) {
        termo_5 *= razao;
    }
    
    printf("TOTAL: %.2f", termo_5);
    
    return 0;
}
