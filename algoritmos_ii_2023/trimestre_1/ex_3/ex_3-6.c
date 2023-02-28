#include <stdio.h>

int main() {
    int valor;
    float media;
    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &valor);
        media += valor / 10.0;
    }
    
    printf("MÉDIA: %.2f", media);
    
    return 0;
}
