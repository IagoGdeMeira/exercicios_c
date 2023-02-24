#include <stdio.h>

int main() {
    float x, maior;
    
    for(int i = 1; i <= 3; i++) {
        scanf("%f", &x);
        if (x > maior || i == 1) {
            maior = x;
        }
    }
    
    printf("MAIOR: %.2f", maior);
    
    return 0;
}
