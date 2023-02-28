#include <stdio.h>
#include <math.h>

int main() {
    float pi, raio, area, circun, diametro;
    
    pi = 3.14;
    scanf("%f", &raio);
    
    diametro = 2 * raio;
    area = pi * pow(raio, 2);
    circun = 2 * pi * raio;

    printf("DIAMETRO: %.2f\n", diametro);
    printf("ÁREA: %.2f\n", area);
    printf("CIRCUNFERÊNCIA: %.2f\n", circun);

    return 0;
}
