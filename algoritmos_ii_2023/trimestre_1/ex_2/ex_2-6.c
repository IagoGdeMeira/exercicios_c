#include <stdio.h>

int main() {
    float x, y, z;
    
    scanf("%f", &x);
    scanf("%f", &y);
    scanf("%f", &z);
    
    if (x == y && y == z) {
        printf("Esses lados formam um triângulo equilátero.\n");
    } else if (x == y || x == z || y == z) {
        printf("Esses lados formam um triângulo isósceles.\n");
    } else {
        printf("Esses lados formam um triângulo escaleno.\n");
    }
    
    return 0;
}
