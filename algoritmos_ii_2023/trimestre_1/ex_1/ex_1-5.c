#include <stdio.h>

int main() {
    float x, y, media;
    
    scanf("%f", &x);
    scanf("%f", &y);
    media = (x + y) / 2.0;
    
    printf("MÉDIA ARITMÉTICA: %.2f", media);
    
    return 0;
}
