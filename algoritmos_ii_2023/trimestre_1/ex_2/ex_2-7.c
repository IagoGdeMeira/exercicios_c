#include <stdio.h>

int main() {
    float x, y, maior;
    
    scanf("%f", &x);
    scanf("%f", &y);
    
    if (x >= y) {
        maior = x;
    } else {
        maior = y;
    }
    
    printf("MAIOR: %.2f", maior);
    
    return 0;
}
