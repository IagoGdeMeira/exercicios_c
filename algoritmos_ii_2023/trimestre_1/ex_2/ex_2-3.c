#include <stdio.h>

int main() {
    float razao, termo_1, termo_10;
    
    scanf("%f", &razao);
    scanf("%f", &termo_1);
    
    termo_10 = termo_1;
    
    for(int i = 2; i <= 10; i++) {
        termo_10 += razao;
    }
    
    printf("TERMO 10: %.2f", termo_10);
    
    return 0;
}
