#include <stdio.h>

int main () {
    int matriz[3][3], multiplicador;
    
    for(int x = 0; x < 3; x++) {
        for(int y = 0; y < 3; y++) {
            printf("Informe um valor para [%dx%d]: ", x+1, y+1);
            scanf("%d", &matriz[x][y]);
        }
    }
    
    printf("Informe o multiplicador: ");
    scanf("%d", &multiplicador);
    
    for(int x = 0; x < 3; x++) {
        for(int y = 0; y < 3; y++)
            matriz[x][y] *= multiplicador;
    }
    
    for(int x = 0; x < 3; x++) {
        printf("|");
        for(int y = 0; y < 3; y++) {
            printf("%3d ", matriz[x][y]);
        }
        printf("\n");
    }
    
    return 0;
}
