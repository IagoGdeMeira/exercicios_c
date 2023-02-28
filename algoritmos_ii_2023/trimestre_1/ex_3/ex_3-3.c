#include <stdio.h>

int main() {
    float nota_1, nota_2, media;
    
    scanf("%f", &nota_1);
    
    while (nota_1 < 0 || nota_1 > 10) {
        printf("Valor inválido\n");
        scanf("%f", &nota_1);
    }
    
    scanf("%f", &nota_2);
    
    while (nota_2 < 0 || nota_2 > 10) {
        printf("Valor inválido\n");
        scanf("%f", &nota_2);
    }
    
    media = (nota_1 + nota_2) / 2;
    
    printf("MÉDIA: %.2f\n", media);
    
    return 0;
}
