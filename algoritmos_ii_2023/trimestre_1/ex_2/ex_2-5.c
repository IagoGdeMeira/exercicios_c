#include <stdio.h>

int main() {
    float menor, x;
    
    for(int i = 1; i <= 5; i++) {
        scanf("%f", &x);
        if (i == 1 || x < menor) {
            menor = x;
        }
    }
    
    printf("MENOR: %.2f", menor);
    
    return 0;
}
