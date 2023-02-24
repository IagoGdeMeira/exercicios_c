#include <stdio.h>

int main() {
    float diag_maior, diag_menor, area;
    
    scanf("%f", &diag_maior);
    scanf("%f", &diag_menor);
    area = diag_maior * diag_menor / 2;
    
    printf("ÁREA DO LOSANGO: %.2f", area);
    
    return 0;
}
